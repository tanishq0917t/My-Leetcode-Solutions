class Solution:
    def deleteNode(self, node):
        a=node.next
        node.val=node.next.val
        node.next=node.next.next
        del a
        return
