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
    
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return NULL;
        }
        head->next=removeElements(head->next,val);

        if(head->val==val){
               return head->next;
        }
        else{
            return head;
        }
    }
    
    
    
//     ListNode* del(ListNode* he, vector<int>& v, int val){
//         vector<int> x;
//         for(int i=0;i<v.size();i++){
//             if(v[i]==val){
//                 continue;
//             }
//             else{
//                 x.push_back(v[i]);
//             }
            
//         }
        
//         for(int i=0;i<x.size();i++){
//             //ListNode* he=NULL;
//             insert(&he,x[i]);
//         }
//         return he;
//     }
//     void insert(ListNode** head, int i)
// {
//     ListNode* temp = new ListNode;
//     ListNode* ptr;
//     temp->val= i;
//     temp->next = NULL;
  
//     if (*head == NULL)
//         *head = temp;
//     else {
//         ptr = *head;
//         while (ptr->next != NULL)
//             ptr = ptr->next;
//         ptr->next = temp;
//     }
// }
//     ListNode* removeElements(ListNode* head, int val) {
//         vector<int> v;
//         ListNode* curr=head;
//         while (curr != NULL) {
//         v.push_back(curr->val);
//         curr = curr->next;
//         }
//         ListNode* he=NULL;
//         del(he,v,val);
//         return he;
//     }
};