class Solution 
{
public:
    ListNode* swapPairs(ListNode* head) 
    {
        if(!head || !head->next) return head;
        ListNode *start=head;
        while(head && head->next)
        {
            swap(head->val,head->next->val);
            head=head->next->next;
        }
        return start;
    }
};
