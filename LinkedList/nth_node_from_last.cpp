void printNthFromLast(Node* head, int N)
{
    int len = 0, i;
    Node* temp = head;
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
    if (len < N)
        return;
    temp = head;
    // Get the (len-N+1)th node from the beginning
    for (i = 1; i < len - N + 1; i++)
        temp = temp->next;
    printf("%d", temp->data);
    return;
}