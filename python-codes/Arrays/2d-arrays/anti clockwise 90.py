n=int(input())
mat=[list(map(int,input().split())) for _ in range(n)]
for j in range(n-1,-1,-1):
    for i in range(n):
        print(mat[i][j],end=" ")
    print()
