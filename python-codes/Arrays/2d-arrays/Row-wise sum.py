r,c=map(int,input().split())
mat=[list(map(int,input().split())) for _ in range(r)]
for row in mat:
    print(sum(row))