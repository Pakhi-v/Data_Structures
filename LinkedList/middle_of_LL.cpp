class Solution{
    public:
    ListNode* middleNode(ListNode* head){
        int n=0;
        ListNode* temp = head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        int half=n/2;
        temp=head;
        while(half--){
            temp=temp->next;
        }
        return temp;
    }
}
/*
Approach using two pointers fast and slow -->
Class Solution{
    public:
    ListNode* middleNode(ListNode* head){
        ListNode* slow= head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow= slow->next;
            fast= fast->next->next;
        }
        return slow->data;
    }

}
*/