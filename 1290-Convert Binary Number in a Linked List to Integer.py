# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def getDecimalValue(self, head: ListNode) -> int:
        a=0
        while head!=None:
            print(head.val)
            a=head.val+a*10
            head=head.next
        return int(str(a),2)
