# Home
from django.contrib import admin
from django.urls import path,include
from home import views


admin.site.site_header = "Krishant Admin"
admin.site.site_title = "Nikku Admin Portal"
admin.site.index_title = "Welcome to Krishant Researcher Portal"

urlpatterns = [
    # path('admin/', admin.site.urls),
    path("",views.index,name='home'),
    path("about",views.about,name='about'),
    path("services",views.services,name='services'),
    path("contact",views.contact,name='contact'),

]
