A1,A2=input().split()
A1=int(A1) ; A2=int(A2)
if A1>A2:
 i=A1 ; j=A2
 while i>= A2 and j <=A1:
    print("%d %d"%(i, j), end='')
    if i==A2 : break
    else : print(" - ", end='')
    i-=1;j+=1
else:
    i=A1 ; j=A2
    while i<=A2 and j >= A1:
        print("%d %d"%(i,j), end='')
        if i == A2 : break
        else : print (" - ", end='')
        i +=1 ; j -=1