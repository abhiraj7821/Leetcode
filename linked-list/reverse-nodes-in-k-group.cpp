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
    ListNode* reverseKGroup(ListNode* head, int k) {
        // Base case
        if(head == NULL) return NULL;

        int len = 0;
        ListNode* check = head;
        while( len<k && check!=NULL){
            check=check->next; 
            len++;
        }


        if(len<k) return head;


        ListNode* curr = head;
        ListNode* forward;
        ListNode* prev = NULL;
        int count=0;

        while(curr!=NULL && count<k){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            count++;
        }

        if(forward != NULL)
            head -> next = reverseKGroup(curr,k);
        
        return prev;
    }
};