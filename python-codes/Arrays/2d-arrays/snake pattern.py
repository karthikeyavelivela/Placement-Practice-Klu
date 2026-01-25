r,c=map(int,input().split())
mat=[list(map(int,input().split())) for _ in range(r)]
for i in range(r):
    if i% 2==0:
        print(*mat[i])
    else:
        print(*mat[i][::-1])