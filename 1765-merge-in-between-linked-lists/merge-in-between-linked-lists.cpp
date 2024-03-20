class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* start = nullptr;
        ListNode* head = list1;
        for (int i=0;i<b;i++) {
            if (i==a-1) {
                start=head;
            }
            head =head->next;
        }
        start->next = list2;
        ListNode* tail = list2;
        while (tail->next != nullptr) {
            tail = tail->next;
        }
        tail->next = head->next;
        head->next =  nullptr;

        return list1;
    }
};