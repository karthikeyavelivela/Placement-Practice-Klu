class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


n = int(input())
arr = list(map(int, input().split()))
x = int(input())


head = None
tail = None

for v in arr:
    node = Node(v)
    if head is None:
        head = tail = node
    else:
        tail.next = node
        tail = node


slow = head
fast = head


while fast.next and fast.next.next:
    slow = slow.next
    fast = fast.next.next


new_node = Node(x)
new_node.next = slow.next
slow.next = new_node


temp = head
while temp:
    print(temp.data, end=" ")
    temp = temp.next
