// Last updated: 7/21/2026, 4:36:05 PM
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        // Dummy node
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;

        while (prev->next && prev->next->next) {

            // Two nodes to swap
            ListNode* first = prev->next;
            ListNode* second = prev->next->next;

            // Swapping
            first->next = second->next;
            second->next = first;
            prev->next = second;

            // Move prev forward
            prev = first;
        }

        return dummy->next;
    }
};