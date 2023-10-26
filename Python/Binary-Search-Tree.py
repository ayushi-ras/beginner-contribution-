class Node:
    def __init__(self,value):
        self.value=value
        self.left=None
        self.right=None


class BST:
    def __init__(self):
        self.root=None

    def __init__(self,value):
        newNode=Node(value)
        self.root=newNode
        
    def insert(self,value):
        newNode=Node(value)
        if self.root==None:
            self.root=newNode
            return True
        
        temp=self.root
        while(True):
            if newNode.value==temp.value:
                return False
            
            if newNode.value < temp.value:
                if temp.left is None:
                    temp.left=newNode
                    return True
                temp=temp.left
            else:
                if temp.right is None:
                    temp.right=newNode
                    return True
                temp=temp.right

    def contains(self,value):
        if self.root is None:
            return False
        
        temp=self.root
        while temp is not None:

            if value < temp.value:
                temp=temp.left
            elif value > temp.value:
                temp=temp.right
            else:
                return True
            
        return False
    
    def BFS(self):
        currentNode=self.root
        results=[]
        queue=[]
        queue.append(currentNode)

        while len(queue) > 0:
            currentNode=queue.pop(0)
            results.append(currentNode.value)
            if currentNode.left is not None:
                queue.append(currentNode.left)
            if currentNode.right is not None:
                queue.append(currentNode.right)
        
        return results
    

bst=BST(2)
bst.insert(4)
bst.insert(9)
bst.insert(10)
bst.insert(1)

arr=bst.BFS()
print(arr)
