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
private:
    void solve(ListNode*& head, int& n){
        // base case
        if(head == NULL) return;

        solve(head->next,n);
        n--;
        if(n==-1){
            head->next = head->next->next;
        }
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL) return NULL;
        solve(head,n);
        if(n==0){
            head = head->next;
        }
        return head;
    }
};