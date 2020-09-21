#I started this without reading arrays. LOL XD

from array import*

n = 0
a = array('i',[12,3,5,11,16,6,4,8,9])
i = 0

for i in range(len(a)):
    j = i+1
    for j in range(i+1,len(a)):
        if(a[j]<a[i]):
            temp = a[j]
            a[j] = a[i]
            a[i] = temp

print(a)

#It works. It fucking works :")