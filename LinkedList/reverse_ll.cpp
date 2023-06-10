//iterative approach
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    if(head == NULL) return NULL;
       ListNode *p=NULL, *c=head,*n=head->next;
       while(c!=NULL){
           c->next=p;
           p=c;
           c=n;
           if(n!=NULL)n=n->next;
       }
       return p;
    }
};
//recursive approach
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head->next==NULL){
            return head;
        }
        ListNode* reverseHead = reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return reverseHead;
    }
    ListNode* reverseList(ListNode* head){
        if(head == NULL) return NULL;  
        return reverse(head);
    }
    };
