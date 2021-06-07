class Solution:
 def removeNthFromEnd(self, head, n):
 
    dummy = ListNode(0)
    dummy.next = head
    first = second = dummy
 
    for i in range(n):
        first = first.next
 
    while first.next is not None:
       first = first.next
       second = second.next
    else:
       second.next = second.next.next
 
    return dummy.next
