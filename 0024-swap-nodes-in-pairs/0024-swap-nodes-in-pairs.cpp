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
    ListNode* swapPairs(ListNode* head) {
          if(head==NULL || head->next==NULL)
          return head;
          ListNode *s=NULL;
          ListNode *c=head;
          ListNode *c1=head->next;
          ListNode *f=NULL;
          // head=head->next;
          cout<<"asdfsadf";
          while(c!=NULL&&c->next!=NULL){
            cout<<"asdfsadf";
            f=c->next;
            s=c->next->next;
            f->next=c;
            if (s==NULL)
            c->next=NULL;
            else if(s->next==NULL)
            c->next=s;
            else
            c->next=s->next;
            c=s;
            
          }
          return c1;                  
    }
};