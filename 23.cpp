/*23. Merge k Sorted Lists
Hard

4279

271

Add to List

Share
Merge k sorted linked lists and return it as one sorted list. Analyze and describe its complexity.

Example:

Input:
[
  1->4->5,
  1->3->4,
  2->6
]
Output: 1->1->2->3->4->4->5->6
    */
    
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
    ListNode* mergetwoLists(ListNode* l1, ListNode* l2) {     
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
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        int i = 0;
        vector<ListNode*> stack{lists};
        
        if (stack.size() == 0) {
            return nullptr;
        }
        
        while(i < (int)stack.size() - 1) {
            stack.push_back(mergetwoLists(stack[i], stack[i + 1]));
            i += 2;
        }
        
        
        return stack[stack.size() - 1];
       
    }
};
