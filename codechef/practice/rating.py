# Problem: RATINGINPRAC
# https://www.codechef.com/problems/RATINGINPRAC
for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    flag=True
    for i in range(len(l)-1):
        if l[i]<=l[i+1]:
            continue
        else:
            flag=False
            break
    if flag:
        print("YES")
    else:
        print("NO")
