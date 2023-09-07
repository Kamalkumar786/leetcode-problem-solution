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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *p=NULL;
        ListNode *c=head;
        ListNode*cn=c->next;
        while(cn!=NULL){
            c->next=p;
            p=c;
            c=cn;
            cn=cn->next;
        }
        c->next=p;
        return c;
        
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right){
            return head;
        }
        ListNode* sp=NULL;
        ListNode* sn=NULL;
        ListNode*cur=head;
        ListNode*e=NULL;
        ListNode*en=NULL;
        int i=1;
        while(cur!=NULL &&i<=right){
            if(i<left){
             sp=cur;
            }
            if(i==left){
                sn=cur;
            }
            if(i==right){
                e=cur;
                en=e->next;
            }
            cur=cur->next;
            i++;
        }
    
        e->next=NULL;
        e=reverseList(sn);
        if(sp){
            sp->next=e;
        }
        else{
            head=e;
        }
        sn->next=en;
        return head;
        
    }
};