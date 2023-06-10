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
    ListNode* reverse(ListNode* ptr) {
    ListNode* pre=NULL;
    ListNode* nex=NULL;
    while(ptr!=NULL) {
        nex = ptr->next;
        ptr->next = pre;
        pre=ptr;
        ptr=nex;
    }
    return pre;
}
    bool isPalindrome(ListNode* head) {
      
     ListNode *t=head;
     ListNode*slow=head;
     ListNode*fast=head;
     while(fast!=NULL && fast->next!=NULL){
         slow=slow->next;
         fast=fast->next->next;
     }
     slow=reverse(slow);
    //  slow/=slow->next;
     ListNode*d=head;
     while(slow!=NULL) {
      if(d->val!= slow->val) return 0;
        d = d->next;
        slow = slow->next;
    }
    return 1;
       
    }
};