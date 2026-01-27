class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


n = int(input())
arr = list(map(int, input().split()))

head = None
tail = None

for x in arr:
    node = Node(x)
    if head is None:
        head = tail = node
    else:
        tail.next = node
        tail = node


min_val = head.data
temp = head

while temp:
    if temp.data < min_val:
        min_val = temp.data
    temp = temp.next

print(min_val)
