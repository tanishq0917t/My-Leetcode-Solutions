class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        ListNode* ans=NULL ;
        vector<int> temp ;
        while(l1 != NULL)
        {
            temp.push_back(l1->val) ;
            l1=l1->next ;
        }
        while(l2 != NULL)
        {
            temp.push_back(l2->val) ;
            l2=l2->next ;
        }
        sort(temp.begin(), temp.end());
        for(int i=0 ; i<temp.size() ; i++)
        {
             ListNode* n=new ListNode(temp[i]) ;
            if(ans==NULL)
               ans=n ;
            else{
                ListNode* t=ans ;
                while(t->next != NULL)
                    t=t->next ;
               t->next=n ;
            }
        }
        return ans;
    }
};
