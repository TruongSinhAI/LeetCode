/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void reorderList(struct ListNode* head) {
    if (!head || !head->next)
        return; // No need to reorder for empty or single node list

    // Create an array to save the address of all list nodes
    struct ListNode* arr[50000]; // Assuming a maximum of 10000 nodes in the list
    struct ListNode* temp = head;
    int index = 0;

    while (temp != NULL) {
        arr[index++] = temp;
        temp = temp->next;
    }

    int i = 0, j = index - 1;
    while (i < j) {
        arr[i]->next = arr[j];
        i++;

        if (i == j) break;  // Break if i and j meet

        arr[j]->next = arr[i];
        j--;
    }
    arr[i]->next = NULL;
}
