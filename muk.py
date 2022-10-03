task=int(input())
n1=int(input())
n2=int(input())
n3=int(input())
t=int(input())
d=int(input())

if(t%n1==0):
    t1=t//n1
else:
    t1=t//n1+1

if((t+2)%n2==0):
    t2=(t+2)//n2
else:
    t2=(t+2)//n2+1


if((t-2)%n3==0):
    t3=(t-2)//n3
else:
    t3=(t-2)//n3+1

print(t1,t2,t3)


