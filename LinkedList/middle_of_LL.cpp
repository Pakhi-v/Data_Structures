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