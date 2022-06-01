# Problem: INFINITY
# https://www.codechef.com/START40C/problems/INFINITY
for _ in range(int(input())):
    n=int(input())
    if n<=1:
        print(0)
    elif n<4:
        print(1)
    else:
        n-=1
        if n%5==0:
            print(2*(n//5))
        elif n%5<=3:
            print(2*(n//5)+1)
        else:
            print(2*(n//5)+2)

