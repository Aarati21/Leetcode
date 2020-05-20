/*2. Add Two Numbers

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example:

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
*/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode initial(0);
       ListNode *newl = &initial;
       int carry_on = 0;
       while ((l1 != nullptr)||(l2 != nullptr)||(carry_on != 0)){
           int n = carry_on + (l1 == nullptr ? 0 : l1->val) + (l2 == nullptr ? 0 : l2->val);
           carry_on = n / 10;
           n = n % 10;
           
           ListNode *new_node = new ListNode(n);
           newl->next = new_node;
           newl = newl->next;
           
           l1 = (l1 == nullptr ? nullptr : l1->next);
           l2 = (l2 == nullptr ? nullptr : l2->next);
           
       }
        return initial.next;
    }
};
