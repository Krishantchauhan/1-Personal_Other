from django.shortcuts import render,HttpResponse

# Create your views here.
def index(request):
    # return HttpResponse("this is homepage")
    return render(request,'index.html')

def about(request):
    return HttpResponse("this is about page")

def services(request):
    return  HttpResponse("This is Services")

def contact(request):
    return  HttpResponse("This is Contact")
