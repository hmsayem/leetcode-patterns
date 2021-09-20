// Problem 83. Remove Duplicates from Sorted List
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) {
            return head;
        }
        ListNode *curr = head;
        while(curr -> next != nullptr) {
            if(curr -> val == curr -> next -> val) {
                curr -> next =  (curr -> next) -> next;
            }
            else {
                curr = curr -> next;
            }
        }
        return head;
    }
};