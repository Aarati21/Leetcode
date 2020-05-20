/*21. Merge Two Sorted Lists
Easy

3794

556

Add to List

Share
Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

Example:

Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4*/

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
   ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
          
   ListNode start(0);
   ListNode * newl = &start;
   while ((l1 != nullptr) || (l2 != nullptr)){
        if (l1 == nullptr){
            int val = l2->val;
            newl->next = new ListNode(val);
            newl = newl->next;
            l2 = l2->next;
       }
       
       else if (l2 == nullptr){
            int val = l1->val;
            newl->next = new ListNode(val);
            newl = newl->next;
            l1 = l1->next;
       }
       else if (l1->val < l2->val){
                int val = l1->val;
                newl->next = new ListNode(val);
                newl = newl->next;
                l1 = l1->next;
       }
       
       else {
                int val = l2->val;
                newl->next = new ListNode(val);
                newl = newl->next;
                l2 = l2->next;
       }
       
   }
    return start.next;
   
}
};
    
