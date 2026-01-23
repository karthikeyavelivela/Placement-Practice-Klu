m,n=map(int,input().split())
matrix=[]
for _ in range(m):
    matrix.append(list(map(int,input().split())))
diag_sum=0
for i in range(min(m,n)):
    diag_sum+=matrix[i][i]
print(diag_sum)
