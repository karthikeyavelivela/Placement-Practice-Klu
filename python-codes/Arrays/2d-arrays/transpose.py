r,c=map(int,input().split())
mat=[list(map(int,input().split()))for _ in range(r)]
for j in range(c):
    for i in range(r):
        print(mat[i][j],end=" ")
    print()
