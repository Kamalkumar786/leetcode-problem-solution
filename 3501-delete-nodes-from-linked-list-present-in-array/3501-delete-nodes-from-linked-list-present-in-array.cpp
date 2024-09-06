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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> v(nums.begin(), nums.end());
        while (head != nullptr && v.count(head->val) > 0) {
            ListNode* t = head;
            head = head->next;
            delete t;
        }
        if (head == nullptr) {
            return nullptr;
        }
        ListNode* current = head;
        while (current->next != nullptr) {
            if (v.contains(current->next->val)) {
                ListNode* t= current->next;
                current->next = current->next->next;
                delete t;
            } else {
                current = current->next;
            }
        }

        return head;
    }
};