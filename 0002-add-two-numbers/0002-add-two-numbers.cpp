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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c=0,s=0;
        ListNode *k=new ListNode(-1);
        ListNode *q=k;
        while(l1!=NULL && l2!=NULL){
            s=(l1->val+l2->val+c);
            c=s/10;
            int r=s%10;
            ListNode *n=new ListNode(r);
            k->next=n;
            k=k->next;
            l1=l1->next;
            l2=l2->next;
        }
      if(l1==NULL){
           while( l2!=NULL){
            s=(l2->val+c);
             c=s/10;
             int r=s%10;
            ListNode *n=new ListNode(r);
            k->next=n;
            k=k->next;
            l2=l2->next;
        }}
        else{
            while( l1!=NULL){
            s=(l1->val+c);
             c=s/10;
             int r=s%10;
            ListNode *n=new ListNode(r);
            k->next=n;
            k=k->next;
            l1=l1->next;
        }
        }
        if(c!=0){
            ListNode *n=new ListNode(c);
            k->next=n;
            k=k->next;
        }

        return q->next;
    }
};