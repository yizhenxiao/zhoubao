
def getMinIndex(list):
    b=list[0]
    for i in list:
      if i<b:
          b=i
    return list.index(b),b
a=[2,6,5,4,3]
print(getMinIndex(a))




