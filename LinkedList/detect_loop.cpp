//Floyd’s Cycle-Finding Algorithm
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        Node* slow_pt = head,*high_pt = head;
        while(slow_pt->next!=NULL && high_pt->next!=NULL && high_pt->next->next!=NULL)
        {
            slow_pt = slow_pt->next;
            high_pt = high_pt->next->next;
            if(slow_pt==high_pt)
            {
                return true;
            }
        }
        return false;
    }
};
