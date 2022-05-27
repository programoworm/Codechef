# Problem: HP18
# https://www.codechef.com/problems/HP18
def main():
  t=int(input())
  res=[]
  for i in range(t):
    n,a,b=[int(x) for x in input().split()]
    ca=0
    cb=0
    A=[int(x) for x in input().split()]
    for j in range(n):
      if A[j]%a==0:
        ca+=1
      if A[j]%b==0 and A[j]%a!=0:
        cb+=1
    if ca>cb:
      res.append(True)
    else:
      res.append(False)
  for i in range(len(res)):
    if res[i]:
      print("BOB")
    else:
      print("ALICE")
  
if __name__=='__main__':
  main()
