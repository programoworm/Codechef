# Problem: ORPERM
# https://www.codechef.com/problems/ORPERM
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    x=b[0]
    for i in b:
        x&=i
    c=[i|x for i in a]
    if sorted(c)==sorted(b):
        print(x)
    else:
        print("-1")
