import os
import shutil

f= open('practice.txt','w+')  #Create a new file (practice.txt)
f.write('This is a test String in txt file')
f.close()

print(os.getcwd())

print(os.listdir())

print(os.listdir('D:\\Important.Data\\MY_Study\\Personal_Other\\'))
# print(os.listdir('D:\Important.Data\MY_Study\Personal_Other'))    #same hai upare wale ki tehra

# print(shutil.move('practice.txt','D:\Important.Data\MY_Study\Personal_Other'))       # it will move the file
                    # |-->file name         |-->destination name /moving path


# print(os.listdir('D:\Important.Data\MY_Study\Personal_Other'))
