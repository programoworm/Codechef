# Problem: ANDSUBAR
# https://www.codechef.com/problems/ANDSUBAR
for _ in range(int(input())):
    n=int(input())
    if(n==1):
        print(1)
        continue
    bupper=0
    blower=0
    for i in range(n+1):
        if n<=(2**i-1):
            bupper=n-2**(i-1)+1
            blower=2**(i-1)-2**(i-2)
            if(bupper>=blower):
                print(bupper)
            else:
                print(blower)
            break
