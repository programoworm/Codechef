# Problem: LAPIN
# https://www.codechef.com/FLMOCK01/problems/LAPIN/
for _ in range(int(input())):
    s=input()
    let=[]
    freq=[]
    flag=True
    for i in range(int(len(s)/2)):
        if s[i] in let:
            continue
        let.append(s[i])
        c=1
        for k in range(i+1,int(len(s)/2)):
            if s[k]==s[i]:
                c+=1
        freq.append(c)
    start=int(len(s)/2)
    if len(s)&1==1:
        start=int(len(s)/2)+1
    for i in range(len(let)):
        c=0
        for j in range(start,len(s)):
            if s[j]==let[i]:
                    c+=1 
        if c!=freq[i]:
            flag=False
            break
    if flag:
        print("YES")
    else:
        print("NO")
