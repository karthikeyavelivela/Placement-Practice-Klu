r,c=map(int,input().split())
mat=[list(map(int,input().split())) for _ in range(r)]
even =odd=0
for row in mat:
    for val in row:
        if val%2==0:
            even+=1
        else:
            odd+=1
print("Even:",even)
print("Odd:",odd)