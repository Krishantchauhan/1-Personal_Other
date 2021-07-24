from django.urls import path,include
from first_app import views
from django.conf.urls import url

urlpatterns = [
    # path('index',include('views.index')),
    url(r'^$',views.index,name='index')

]
