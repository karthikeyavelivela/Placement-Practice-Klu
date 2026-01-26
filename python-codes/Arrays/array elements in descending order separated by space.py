n=int(input())
arr=list(map(int,input().split()))
mul=int(input())
for i in range(n):
    arr[i]=arr[i]*mul
arr.sort(reverse=True)
print(*arr)
