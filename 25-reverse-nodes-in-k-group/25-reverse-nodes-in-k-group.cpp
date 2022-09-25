class Solution {
public:
    void reverse(ListNode*s,ListNode* e ){
         ListNode *p=NULL,*c=s,*n=s->next;
        while(p!=e){
            c->next=p;
            p=c;
            c=n;
            if(n!=NULL)n=n->next;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
       
        if(!head || !head->next || k==1 ) return head;
        ListNode *s=head,*e=head;
        int i=k-1;
        while(i--){
            e=e->next;
            if(e==NULL) return head;
        }
        ListNode* newHead = reverseKGroup(e->next,k);
        reverse(s,e);
        s->next = newHead;
    return e;
    }
};