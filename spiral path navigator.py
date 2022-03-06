n=int(input())
l=[[n*i+j+1 for j in range(n)] for i in range(n)]
count=n-1; i=0; j=0

while count>0:
    for x in range(count):
        print(l[i][j], i, j)
        j+=1
    for x in range(count):
        print(l[i][j], i, j)
        i+=1
    for x in range(count):
        print(l[i][j], i, j)
        j-=1
    for x in range(count):
        print(l[i][j], i, j)
        if x!=count-1: i-=1
    count-=2; j+=1

if n%2!=0: print(l[i][j], i, j)