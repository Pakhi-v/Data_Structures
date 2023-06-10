ListNode* removeNthFromEnd(ListNode* head, int n){
    ListNode* temp = new ListNode();
    temp->next = head;

    ListNode* fast = temp;
    ListNode* slow = temp;

    for(int i=1;i<=n;i++){
        fast=fast->next;
            }
        while(fast->next != NULL){
            fast=fast->next;
            slow=slow->next;
        }
        ListNode* ans = slow->next;
        slow->next = slow->next->next;
        delete(ans);

        return temp->next;


}