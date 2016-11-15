/*************************************************************************
	> File Name: Hello.java
	> Author: 
	> Mail: 
	> Created Time: 2016年11月16日 星期三 00时18分18秒
 ************************************************************************/

public class Hello {
    public int foo(int a, int b) {
        return (a + b) * (a - b);
    }
    public static void main(String [] argc) {
        Hello hello = new Hello();
        System.out.println(hello.foo(5, 3))
    }
}

