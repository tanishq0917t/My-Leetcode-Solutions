class Solution 
{
    public ListNode partition(ListNode head, int x) 
    {
        if(head==null) return null;
        ListNode dmh=new ListNode(0);
        ListNode sm=dmh;
        ListNode dmh2=new ListNode(0);
        ListNode bg=dmh2;
        while(head!=null)
        {
            if(head.val<x)
            {
                sm.next=head;
                sm=sm.next;
            }
            else
            {
                bg.next=head;
                bg=bg.next;
            }
            head=head.next;
        }
        bg.next=null;
        sm.next=dmh2.next;
        return dmh.next;
    }
}
