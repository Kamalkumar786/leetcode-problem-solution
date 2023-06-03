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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* l=head;
        ListNode* r=head;
        if(head->next==NULL)
            return head;
        for(int i=1;i<k;i++){
            l=l->next;
           
        }
         ListNode* g=l;
          cout<<g->val<<" "<<l->val<<endl;
        while(g->next!=NULL){
            g=g->next;
            r=r->next;
            cout<<g->val<<" "<<r->val<<endl;
        }
       
        int t=l->val;
        // cout<<l<<" "<<r<<endl;
        
        l->val=r->val;
        r->val=t;
        return head;
        
    }
};