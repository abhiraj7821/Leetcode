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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next == NULL) return NULL;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast!=NULL && slow!=NULL){
            fast = fast->next;
            if(fast!=NULL) fast = fast->next;
            slow=slow->next;
            if(fast==slow) break;
        }
        if(fast==NULL || slow==NULL) return NULL;
        else{
            slow=head;
            while(slow!=fast){
                fast=fast->next;
                slow=slow->next;
            }
            return fast;
        }
    }
};