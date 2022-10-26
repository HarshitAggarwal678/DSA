import math
a=int(input())
for i in range(a):
    l=int(input())
    s=input()
    b=""
    x=0
    y=0
    j=0
    for k in range(l-1,-1,-1):
        if(s[k]=="0"):
            y=y+math.pow(2,j)
        else:
            x=x+math.pow(2,j)
        j=j+1
    g=0
   # print(y)
    for n in range(1,int(x)+1):
        g=int(int(x)/math.pow(2,n))
        if(g==int(y)):
            print(n)
            break
        elif(g>int(x)):
            print(n-1)
            break