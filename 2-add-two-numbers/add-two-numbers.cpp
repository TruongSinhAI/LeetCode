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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* ans = new ListNode(0);
        ListNode* root = ans;
        int carry = 0;
        while (l1 || l2 || carry){
            int x = (l1) ? l1->val: 0;
            int y = (l2) ? l2->val: 0;

            int sum = x+y+carry;
            int d = sum %10;
            carry = sum/10;

            ListNode* newNode = new ListNode(d);
            root->next = newNode;
            root = root->next;
            l1 = (l1) ? l1->next: l1;
            l2 = (l2) ? l2->next: l2;
        }

        return ans->next;

    }
};