# Problem: XORR
# https://www.codechef.com/START40C/problems/XORR
# Hint: A[i] xor B[i]==A[j] xor B[j]
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    d={} # For storing the frequency of the xor values
    for i in range(n):
        x=a[i]^b[i]
        if x in d:
            d[x]+=1
        else:
            d[x]=1
    c=0
    for i in d.values():
        if i>=2:
            c+=((i**2-i)//2) # nCr calculation
    print(c)
