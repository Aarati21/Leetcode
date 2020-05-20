/*19. Remove Nth Node From End of List
Medium

2983

221

Add to List

Share
Given a linked list, remove the n-th node from the end of list and return its head.

Example:

Given linked list: 1->2->3->4->5, and n = 2.

After removing the second node from the end, the linked list becomes 1->2->3->5.*/





class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if (head == nullptr)
            return nullptr;
        
        
        
        vector<ListNode*> address;
        ListNode start(0);
        ListNode* newl = &start;
        
        while(head!=nullptr){
            
            newl->next = head;
            address.push_back(head);
            head = head->next;
            newl = newl->next;
        }
        
        
        
        int k = address.size() - n;
        if (k == 0){
            ListNode* s = start.next;
            return s->next;
        }
        if (n == 1){
            address[k-1]->next = nullptr;
            return start.next;
        }
        address[k-1]->next = address[k+1];
        return start.next;
    }
};
