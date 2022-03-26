

class Solution {
    public:
    ListNode* reverse(ListNode* head){
        if(!head || !head->next){
            return head;
        }
        
              ListNode* cur=head;
              ListNode* prev=NULL;
              ListNode* nex = NULL;
              while(cur){
                  nex=cur->next;
                  cur->next=prev;
                  prev=cur;
                  cur=nex;
              }
              head = prev;
              return head;
    }
         ListNode* middle(ListNode* head) {
             ListNode* slow=head;
             ListNode* fast=head;
             while(fast && fast->next){
                 slow=slow->next;
                 fast=fast->next->next;
             }
             return slow;
         }
     bool isPalindrome(ListNode* head) {
        ListNode *mid = middle(head);
        ListNode *rev = reverse(mid);
        ListNode *l=head,*h=rev;
        
        while(h!=NULL)
        {
            if(l->val != h->val)
                return false;
            
            l=l->next;
            h=h->next;
        }
         return true; 
    }
    
};