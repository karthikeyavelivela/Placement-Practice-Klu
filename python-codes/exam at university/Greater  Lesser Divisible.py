n=int(input())
arr=list(map(int,input().split()))
s=int(input())
greate=lesser=divisible=0
for x in arr:
    if x>s:
        greate+=1
    elif x<s:
        lesser+=1
    if x%s==0:
        divisible+=1

print("Greater:", greate)
print("Lesser:", lesser)
print("Exactly divisible:", divisible)