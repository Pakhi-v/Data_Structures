class Solution {
public:
void reverse(ListNode* s, ListNode*e){
    ListNode *p=NULL,*c=s,*n=s->next;
    while(p!=e){
        c->next=p;
        p=c;
        c=n;
        if(n!=NULL) n=n->next;
    }
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL || head->next==NULL || k==1) 
        return head;
        ListNode *s=head, *e=head;
        int incr=k-1;
        while(incr--){
            e=e->next;
            if(e==NULL) return head;
        }
        ListNode* nextHead=reverseKGroup(e->next,k);
        reverse(s,e);
        s->next=nextHead;
        return e;
    }
};