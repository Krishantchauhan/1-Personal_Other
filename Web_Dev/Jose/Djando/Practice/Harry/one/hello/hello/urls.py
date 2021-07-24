#hello
from django.contrib import admin
from django.urls import path,include

urlpatterns = [
    path('admin/', admin.site.urls),
    path('',include('home.urls')),
    path('about',include('home.urls')),
    path('services',include('home.urls')),
    path('contact',include('home.urls')),
]
