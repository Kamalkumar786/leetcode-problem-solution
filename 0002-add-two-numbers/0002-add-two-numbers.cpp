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
    ListNode* addTwoNumbers(ListNode* head1, ListNode* head2) {
          int car=0;
    ListNode*p=new ListNode(9);
        ListNode*ans=p;
    while(head1!=NULL||head2!=NULL||car>0){
        int sum=car;
        if(head1!=NULL){
            sum+=head1->val;
            head1=head1->next;
        }
        if(head2!=NULL){
            sum+=head2->val;
            head2=head2->next;
        }
        int v=sum%10;
        car=sum/10;
        ans->next=new ListNode(v);
        ans=ans->next;
    }
    return p->next;;
    }
};