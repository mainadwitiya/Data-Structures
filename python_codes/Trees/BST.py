#!/usr/bin/env python3
#Author AD

class BT():
    def __init__(self,data):
        self.left=None
        self.data=data
        self.right=None


    def insert_data(self,data):

        if self.data == data:
            return False #duplicates issue

        elif data<self.data:
            if self.left:
                return self.left.insert_data(data)

            else:
                self.left = BT(data)
                return True
        else:
            if self.right:
                return self.right.insert_data(data)
            else:
                self.right = BT(data)
                return True


    '''
    Traversals
    '''
    def preorder(self):
        print(self.data)
        if self.left:
            self.left.preorder()
        if self.right:
            self.right.preorder()


    def postorder(self):
        
        if self.left:
            self.left.preorder()
        if self.right:
            self.right.preorder()
        print(self.data)

    
    def inorder(self):
        
        if self.left:
            self.left.preorder()
        print(self.data)
        if self.right:
            self.right.preorder()
        
    '''
    Searching the value
    '''
    def search(self,value):
        if value < self.data:
            if self.left is None:
                return str(value)+ ' is not found'
            return self.left.search(value)
        elif value > self.data:
            if self.right is None:
                return str(value)+ ' is not found'
            return self.right.search(value)
        else:
            return str(self.data)+ ' is found'

    def display(self):
        if self.left:
            self.left.display()
        print(self.data)
        if self.right:
            self.right.display()


    # #max value
    # def max_value_tree(self,node):
    #     current = node
    #     while (current.right is not None):
    #         current = current.right
    #     return current

object=BT(10)
object.insert_data(24)
object.insert_data(8)
object.insert_data(35)
object.preorder()

print('pos order')
object.postorder()

print('inorder')
object.inorder()


print('search query')
res = object.search(35)
print(res)

print('search query')
res = object.search(97)
print(res)