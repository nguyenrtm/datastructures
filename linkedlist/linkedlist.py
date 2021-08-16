class Node:
    def __init__ (self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self, head=None):
        self.head = head

    def append(self, newNode):
        temp = self.head
        if self.head:
            while temp.next:
                temp = temp.next
            temp.next = newNode
        else:
            self.head = newNode

    def show(self):
        temp = self.head
        if self.head:
            while temp:
                print(temp.data,end=" ")
                temp = temp.next
        else: 
            print("There is no linked list")

e1 = Node(3)
e2 = Node(5)
e3 = Node(12)
e4 = Node(1)

ll = LinkedList(e1)
ll.append(e2)
ll.append(e3)
ll.append(e4)

ll.show()