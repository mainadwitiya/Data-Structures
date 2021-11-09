#!/usr/bin/env python3
#Author AD

class Node():
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
                self.left = Node(data)
                return True
        else:
            if self.right:
                return self.right.insert_data(data)
            else:
                self.right = Node(data)
                return True



    def display(self):
        if self.left:
            self.left.display()
        print(self.data)
        if self.right:
            self.right.display()


object=Node(10)
object.insert_data(24)
object.insert_data(8)
object.insert_data(35)
object.display()
