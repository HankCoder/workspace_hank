from __future__ import with_statement
from contextlib import closing
import socket
import sys

import multitask


STDIN_FILENO  = 0
STDOUT_FILENO = 1 


def echo_client(hostname, port):
    addrinfo = socket.getaddrinfo(hostname, port, socket.AF_UNSPEC,
                                  socket.SOCK_STREAM)
    family, socktype, proto, canonname, sockaddr = addrinfo[0]

    with closing(socket.socket(family, socktype, proto)) as sock:
        sock.connect(sockaddr)

        while True:
            if sys.platform == 'win32':
                input = sys.stdin.readline()
            else:
                input = (yield multitask.read(STDIN_FILENO, 1024))

            yield multitask.send(sock, input)
            output = (yield multitask.recv(sock, 1024))

            if sys.platform == 'win32':
                sys.stdout.write(output)
            else:
                yield multitask.write(STDOUT_FILENO, output)


if __name__ == '__main__':
    hostname = None
    port = 1111

    if len(sys.argv) > 1:
        hostname = sys.argv[1]
    if len(sys.argv) > 2:
        port = int(sys.argv[2])

    multitask.add(echo_client(hostname, port))
    try:
        multitask.run()
    except KeyboardInterrupt:
        pass
