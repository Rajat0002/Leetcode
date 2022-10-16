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
    ListNode* middleNode(ListNode* head) {
        
        int count=0;
        ListNode* p1=head;
      
        while(p1!=nullptr){
            count++;
            p1=p1->next;
        }
        int mid=count/2;
        
        while(mid>0){
            head=head->next;
            mid--;
        }
        return head;
        
    }
};