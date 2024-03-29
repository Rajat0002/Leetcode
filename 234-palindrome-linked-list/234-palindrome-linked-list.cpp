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
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        int i=0;
        ListNode* curr=head;
        while (curr != NULL) {
        v.push_back(curr->val);
        curr = curr->next;
        }
        
        int j=v.size()-1;
        while(i<=j){
            if(v[i]!=v[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};