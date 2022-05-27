# Problem: EQDIFFER
# https://www.codechef.com/problems/EQDIFFER
for _ in range(int(input())):
    n=int(input())
    A=list(map(int,input().split()))
    d={}
    if n<=2:
        print(0)
        continue
    for i in A:
        if i in d:
            d[i]+=1
        else:
            d[i]=1
    maxfreq=max(d.values())
    if maxfreq>2:
        print(len(A)-maxfreq)
    else:
        print(len(A)-2)
