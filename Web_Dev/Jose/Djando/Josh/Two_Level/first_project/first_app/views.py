from django.shortcuts import render
from first_app import views
from first_app.models import Topic,Webpage,AccessRecords

# Create your views here.
def index(request):
    webpages_list = AccessRecords.objects.order_by('date')
    date_dict = {'access_records':webpages_list}
    # my_dict = {'insert_content' : "HELLO IM FROM FIRSTAPP!"}
    return render(request,'first_app/index.html',context=date_dict)
