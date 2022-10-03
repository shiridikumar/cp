arr=[int(i) for i in input().split()]
answer=0
k=0
for i in range(len(arr)):
    if(arr[i]%6==0):
        answer+=arr[i]
        k+=1
if(answer==0):
    print(0)
else:
    print(answer/k)
