class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head,*fast=head,*initial=head;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow ) break;
        }
      
        if(!fast ||  !fast->next) return NULL;
        while(initial!=slow ){
            initial=initial->next;
            slow=slow->next;
        }
        return slow;
    }
};