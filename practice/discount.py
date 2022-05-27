# Problem: DISCOUNTT
# https://www.codechef.com/START40C/problems/DISCOUNTT
for _ in range(int(input())):
    n,x,y=map(int,input().split())
    A=list(map(int,input().split()))
    price=sum(A)
    s=0
    for i in A:
        if i>y:
            s+=(i-y)
    s+=x
    if s<price:
        print("COUPON")
    else:
        print("NO COUPON")
