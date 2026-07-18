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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curr2 = headB;
        ListNode* curr1 = headA;

        while(curr1!=NULL){
            while(curr2!=NULL){
                if(curr2==curr1){
                    return curr2;
                }
                else{
                    curr2 = curr2->next;
                }
            }
            curr2 = headB;
            curr1 = curr1->next;
        }

        return NULL;
    }
};