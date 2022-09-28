class Solution {
public:
      ListNode* reverseList(ListNode* head){
          if(!head ) return NULL;
        ListNode *prev=NULL,*cur=head,*nxt = head->next;
        while(cur){
            cur->next=prev;
            prev=cur;
            cur=nxt;
            if(nxt)nxt=nxt->next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head, *fast=head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast=fast->next->next;
        }
        slow->next= reverseList(slow->next);
        ListNode *start = head , *mid  = slow->next;
        while(mid){
            if(start->val!=mid->val) return false;
            start=start->next;
            mid=mid->next;
        }
        reverseList(slow->next);
        return true;
    }
};