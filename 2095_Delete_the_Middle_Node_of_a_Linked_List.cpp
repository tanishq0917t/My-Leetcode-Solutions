class Solution 
{
public:
    ListNode* deleteMiddle(ListNode* head) 
    {
        if (head -> next == nullptr) return nullptr;
        ListNode *slow = head, *fast = head -> next -> next;
        while (fast != nullptr && fast -> next != nullptr) 
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        slow -> next = slow -> next -> next;
        return head;
    }
};
