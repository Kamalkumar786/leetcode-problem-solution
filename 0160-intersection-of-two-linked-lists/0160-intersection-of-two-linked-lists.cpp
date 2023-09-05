/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int length_Node(ListNode *head){
        int l=0;
        while(head){
            l++;
            head=head->next;
    
        }
        return l;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA ||!headB) return NULL;
        int l1=length_Node(headA);
        int l2=length_Node(headB);
         if(l1>l2){
            while(l1>l2){
                headA = headA->next;
                l1--;
            }
         }
        else if(l1<l2){
            while(l1<l2){
                headB = headB->next;
                l2--;
            }
        }
     while(headA && headB){
            if(headA==headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;

    }
};