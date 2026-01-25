r,c=map(int,input().split())
mat=[list(map(int,input().split())) for _ in range(r)]
for j in range(c):
    s=0
    for i in range(r):
        s+=mat[i][j]
    print(s)
