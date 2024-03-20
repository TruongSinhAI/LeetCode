/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* node1 = list1;
        while (a-1>0){
            node1 = node1->next;
            a --;
            b --;
        }
        ListNode* temp1 = node1;
        while(b+1>0){
            node1 = node1->next;
            b--;
        }
        temp1->next = list2;
        while (temp1->next !=NULL){
            temp1 = temp1->next;
        }
        temp1->next = node1;
        return list1;
    }
};