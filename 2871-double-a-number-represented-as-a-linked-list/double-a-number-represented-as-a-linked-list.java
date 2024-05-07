/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode rev(ListNode head){
        ListNode prev = null;
        ListNode cur = head;
        while (cur != null){
            ListNode tmp = cur.next;
            cur.next = prev;
            prev = cur;
            cur = tmp;
        }
        return prev;
    }
    public ListNode doubleIt(ListNode head) {
        int tmp = 0;
        ListNode cur = rev(head);
        ListNode save = cur;

        while (cur != null){
            int tmp2 = cur.val * 2 + tmp;
            tmp = tmp2/10;
            cur.val = tmp2 % 10;
            if (cur.next == null && tmp != 0) {
                // System.out.println(tmp);
                ListNode newNode = new ListNode(1);
                cur.next = newNode;
                break;
            }
            // System.out.println(cur.val);
            cur = cur.next;
        }
        return rev(save);
    }
}