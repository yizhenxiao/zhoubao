import os
path ="D:\学习\code\C语言\小甲鱼python\python\.idea"
count = 0
for fn in os.listdir(path): #fn 表示的是文件名
        count = count+1
print (count)



