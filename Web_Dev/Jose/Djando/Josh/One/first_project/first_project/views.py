from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.

def index(request):
    my_dict = {'insert_me':"Hello I am from view.py"}
    return render(request,'/Users/krishant/Documents/Study/1-Personal_Other/Web_Dev_Jos/Djando/first_project/templets/index.html',context=my_dict)
