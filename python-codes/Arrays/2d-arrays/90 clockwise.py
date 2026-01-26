n=int(input())
mat=[list(map(int,input().split())) for _ in range(n)]
for j in range(n):
    for i in range(n-1,-1,-1):
        print(mat[i][j],end=" ")
    print()
