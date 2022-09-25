class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        
        ListNode* ans = new ListNode(-1);
        ListNode* tail = ans;
        
        while(l1 && l2){
            if(l1->val<l2->val){
                tail->next = l1;
                l1=l1->next;    
            }
            else{
                tail->next = l2;
                l2=l2->next;
            }
            tail=tail->next;
        }
        if(!l1) tail->next=l2;
        else tail->next = l1;
        
        return ans->next;
    }
};