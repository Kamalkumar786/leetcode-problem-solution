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
        vector<int>v;
        ListNode*h=head;
        while(h!=NULL){
            v.push_back(h->val);
            h=h->next;
        }
        swap(v[k-1],v[v.size()-k]);
        ListNode* n=new ListNode(-1);
        ListNode *p=n;
        int i=0;
        while(i<v.size()){
            ListNode* t=new ListNode(v[i]);
            n->next=t;
            n=t;
            i++;
        }
        return p->next;
    }
};