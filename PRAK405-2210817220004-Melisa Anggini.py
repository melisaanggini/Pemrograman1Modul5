a1,a2 = input().split()
a1 = int(a1) ; a2 = int(a2)
for i in range (1,a1+1):
    jar=i
    while jar >1:
        print("(%d * %d) + "%(jar,a2), end='');jar-=1
    o = 1 ; hasil=(i * a2)
    while o<i:
        hasil += ( o * a2) ; o+=1
    print("(%d * %d) = %d"%(jar,a2,hasil))
p=1 ; q=1 ;t = 0
while p<=a1:
    t += q * a2 ; q += p + 1 ; p +=1
print("%d"%(t))