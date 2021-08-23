class Node(object):
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

class BST(object):
    def __init__(self, root):
        self.root = Node(root)

    def insert(self, new_val):
        self.ins(self.root, new_val)
        pass

    def search(self, find_val):
        return self.sea(self.root, find_val)

    def ins(self, start, new_val):
        if (start == None):
            start = Node(new_val)
            return
        elif start:
            if (new_val <= start.value):
                self.ins(start.left, new_val)
            elif (new_val > start.value):
                self.ins(start.right, new_val)
        return

    def sea(self, start, find_val):
        if start:
            if (find_val == start.value):
                return True
            elif (find_val < start.value):
                return self.sea(start.left, find_val)
            elif (find_val > start.value):
                return self.sea(start.right, find_val)
        return False

    
# Set up tree
tree = BST(4)

# Insert elements
tree.insert(2)
tree.insert(1)
tree.insert(3)
tree.insert(5)

# Check search
# Should be True
print(tree.search(4))
# Should be False
print(tree.search(6))