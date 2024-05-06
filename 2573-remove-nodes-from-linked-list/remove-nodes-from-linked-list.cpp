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
    ListNode* fun(ListNode* head) {
        ListNode* pre = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        while (curr != nullptr) {
            next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }
        return pre;
    }
    
    ListNode* removeNodes(ListNode* head) {
        ListNode* t = fun(head);
        ListNode* t1 = t;
        ListNode* t2 = t1;
        int ma = t->val;
        while (t1 != nullptr) {
            if (t1->val > ma)
                ma = t1->val;
            while (t1->next != nullptr && t1->next->val < ma) {
                t1->next = t1->next->next;
            }
            t1 = t1->next;
        }
        return fun(t2);
    }
};
