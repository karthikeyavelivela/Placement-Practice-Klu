r,c=map(int,input().split())
mat=[list(map(int,input().split())) for _ in range(r)]
mx=mat[0][0]
mn=mat[0][0]
for row in mat:
    for x in row:
        if x>mx:
            mx=x
        if x<mn:
            mn=x
print(mx,mn)