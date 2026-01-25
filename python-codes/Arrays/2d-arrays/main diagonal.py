n = int(input())
mat = [list(map(int, input().split())) for _ in range(n)]

s = 0
for i in range(n):
    s += mat[i][i]

print(s)
