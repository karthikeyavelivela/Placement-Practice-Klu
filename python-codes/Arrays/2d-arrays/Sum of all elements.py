r,c=map(int,input().split())
mat=[list(map(int,input().split())) for _ in range(r)]
s=0
for row in mat:
    s+=sum(row)
print(s)