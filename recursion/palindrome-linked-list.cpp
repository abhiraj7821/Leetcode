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
    bool isPalindromeV(vector<int> v){
        int s = 0;
        int e = v.size()-1;
        while(s<=e){
            if( v[s] != v[e] ) return false;
            s++;
            e--; 
        }
        return true;
    }
public:
    bool isPalindrome(ListNode* head) {
       vector<int> values;
       while(head!=NULL){
        values.push_back(head->val);
        head = head->next;
       }
       return isPalindromeV(values);
    }
};