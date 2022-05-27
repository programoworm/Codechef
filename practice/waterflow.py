# Problem: WATERFLOW
# https://www.codechef.com/problems/WATERFLOW/
for _ in range(int(input())):
    w,x,y,z=map(int,input().split())
    total=w+y*z
    if x==total:
        print("Filled")
    elif(x>total):
        print("Unfilled")
    else:
        print("Overflow")
