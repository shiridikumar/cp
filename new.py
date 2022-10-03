n=int(input())
n1=n;
n1=max(0,n1-250000)
s=[];tax=5
taxes=[]
while(n1>250000 and tax<=25):
    n1-=250000
    s.append(tax);tax+=5
    taxes.append(250000)
taxes.append(n1)
s.append(tax)

print(s,tax,taxes)
total=0
for i in range(len(s)):
    total+=(s[i]/100)*taxes[i]
print(total)
surcharge=0
if(n>5000000):
    surcharge=(10/100)*total
elif(n>10000000):
    surcharge=(15/100)*total
elif(n>20000000):
    surcharge=(25/100)*total
elif(n>50000000):
    surcharge=(37/100)*total

liable=total+surcharge
final=(4/100)*liable+liable
print(final)






