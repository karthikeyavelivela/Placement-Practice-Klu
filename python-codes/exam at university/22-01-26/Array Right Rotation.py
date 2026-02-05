n=int(input())
arr=list(map(int,input().split()))
m=int(input())
m=m%n
res=arr[-m:]+arr[:-m]
print(*arr)