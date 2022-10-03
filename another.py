n=[int(i) for i in input().split()]
s=0
for i in range(len(n)):
    for j in range(2,(n[i]//2)+1):
        if(n[i]%j==0):
            break
    else:
        # print(n[i])
        s+=n[i]
print(s)