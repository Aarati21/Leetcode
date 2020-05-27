/*148. Sort List
Medium

2468

121

Add to List

Share
Sort a linked list in O(n log n) time using constant space complexity.

Example 1:

Input: 4->2->1->3
Output: 1->2->3->4
Example 2:

Input: -1->5->3->4->0
Output: -1->0->3->4->5*/




class Solution {
public:
    ListNode* sortList(ListNode* head) {
        multiset <int> gq;
        ListNode temp(0);
        ListNode* newl = &temp;
        while (head!=nullptr){
            gq.insert(head->val);
            head = head->next;
        }
        for (auto it = gq.begin(); it != gq.end(); it++){
            newl->next = new ListNode(*it);
            newl = newl->next;
        }
            
        
        return temp.next;
        
    }
};
