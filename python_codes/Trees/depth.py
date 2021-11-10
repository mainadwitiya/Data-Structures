class Node:
 
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
 

def height_of_tree(node):
    if node is None:
        return -1 ;
 
    else :
        left_height = height_of_tree(node.left)
        right_height = height_of_tree(node.right)
        if (left_height > right_height):
            return left_height+1
        else:
            return right_height+1
 
 
# Driver program to test above function
object = Node(1)
object.left = Node(222)
object.right = Node(300)
object.left.left = Node(19)
object.left.right = Node(23)
object.left.left.left = Node(191)
object.left.right.right = Node(243)
 
 
height=height_of_tree(object)

print(f'Height of tree is {height}')