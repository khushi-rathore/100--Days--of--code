// Given the head of a linked list, remove the nth node from the end of the list and return its head.

 

// Example 1:


// Input: head = [1,2,3,4,5], n = 2
// Output: [1,2,3,5]
// Example 2:

// Input: head = [1], n = 1
// Output: []
// Example 3:

// Input: head = [1,2], n = 1
// Output: [1]
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *slow = head;
        ListNode *fast = head;

        // Move fast pointer 'n' steps ahead
        for(int i=0; i<n; i++){
            fast = fast->next;
        }

        // Handle special case: deletion of head node
        if(fast == NULL){
            ListNode *ans = head->next;
            delete(head);
            return ans;
        }

        // Move both pointers until fast reaches the end
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next;
        }

        // Remove the nth node from the end
        ListNode *delNode = slow->next;
        slow->next = slow->next->next;

        // Delete the node
        delete(delNode);

        // Return the head of modified list
        return head;
    }
};