class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        ListNode* reversedList = reverseList(head);
        int carry = 0;
        ListNode* current = reversedList, *previous = nullptr;
        while (current != nullptr) {
            int newValue = current->val * 2 + carry;
            current->val = newValue % 10;
            if (newValue > 9) {
                carry = 1;
            } else {
                carry = 0;
            }
            previous = current;
            current = current->next;
        }
        if (carry != 0) {
            ListNode* extraNode = new ListNode(carry);
            previous->next = extraNode;
        }
        ListNode* result = reverseList(reversedList);
        return result;
    }
    ListNode* reverseList(ListNode* node) {
        ListNode* previous = nullptr, *current = node, *nextNode;
        while (current != nullptr) {
            nextNode = current->next;
            current->next = previous;
            previous = current;
            current = nextNode;
        }        
        return previous;
    }
};