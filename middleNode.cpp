// Problem 876. Middle of the Linked List
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode* curr = head;
        int cnt = 1;
        while(curr -> next != nullptr) {
            curr = curr -> next;
            cnt++;
        }
        curr = head;
        for(int i = 1; i <= cnt / 2 ; i++){
            curr = curr -> next;
        }
        return curr;
    }
};