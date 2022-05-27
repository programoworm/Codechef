# Problem: CHN15A
# https://www.codechef.com/FLMOCK01/problems/CHN15A/
for _ in range(int(input())):
    n,k=map(int,input().split())
    l=list(map(int,input().split()))
    c=0
    for i in l:
        if (i+k)%7==0:
            c+=1
    print(c)
