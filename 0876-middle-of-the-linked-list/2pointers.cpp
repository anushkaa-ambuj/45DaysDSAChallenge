class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // If there is only one node in the linked list
        if (head == NULL || head -> next == NULL) 
            return head;
        
        // Assign 2 pointers: fast & slow
        ListNode * slow = head;
        ListNode * fast = head;
        while (fast != NULL && fast -> next != NULL) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }
};