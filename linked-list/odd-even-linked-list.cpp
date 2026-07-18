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
    ListNode* oddEvenList(ListNode* head) {
        // Return head if [], [1], [1,2];
        if(head == NULL || head->next == NULL || head->next->next == NULL ) return head;

        ListNode* curr = head;
        ListNode* secoundNode = head->next;
        ListNode* temp;

        ListNode* fast = head;
        while(fast->next!=NULL){
            if(fast->next->next == NULL ) break;
            fast = fast->next->next;
        }

        cout<<fast->val<<endl;

        while( curr!=fast) {
            temp = curr->next;
            curr->next = temp->next;
            curr = temp;
        }

        // connect to secount node;
        curr->next = secoundNode;
        return head;
    }
};