from django.shortcuts import render
from django.http import HttpResponse
from django.http import StreamingHttpResponse
from django.shortcuts import render_to_response
from rest_framework.renderers import  JSONRenderer
from myLesson.models import Book
from myLesson.serializers import BookSerializer
# Create your views here.

def hello(request):
    return HttpResponse("hello world!")

def views(request):
    return render_to_response("2.html", {"name":"luohao"})

class JSONResponse(StreamingHttpResponse):
    def __init__(self, data, **kwargs):
        content = JSONRenderer().render(data)
        kwargs['content_type'] = 'application/json'
        super(JSONResponse, self).__init__(content, **kwargs)

def book_list(request, num):
    if request.method == 'GET':
        b = Book.objects.get(id=num)
        ser = BookSerializer(b)
        return JSONResponse(ser.data)