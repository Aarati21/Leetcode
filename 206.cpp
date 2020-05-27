/*6.everse Linked List
Easy

4156

85

Add to List

Share
Reverse a singly linked list.

Example:

Input: 1->2->3->4->5->NULL
Output: 5->4->3->2->1->NULL
Follow up:

A linked list can be reversed either iteratively or recursively. Could you implement both?*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode temp(0);
        ListNode* newl = &temp;
        vector<int> l;
        while(head !=nullptr){
            l.push_back(head->val);
            head = head->next;
            
        }
        int i = l.size() - 1;
       
        while(i >= 0){
            newl->next = new ListNode(l[i]);
            newl = newl->next;
            i--;
        }
        
        return temp.next;
        
    }
};
