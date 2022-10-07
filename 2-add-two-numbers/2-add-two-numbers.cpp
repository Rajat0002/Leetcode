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
    
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     
//         vector<int> v1;
//         vector <int> v2;
//         vector<int> v3;
        
//         ListNode* curr1=l1;
//         while (curr1 != NULL) {
//         v1.push_back(curr1->val);
//         curr1 = curr1->next;
//         }
        
//         ListNode* curr2=l2;
//         while (curr2 != NULL) {
//         v2.push_back(curr2->val);
//         curr2 = curr2->next;
//         }
        
//         for(int i=v1.size()-1;i>=0;i--){
            
//             if(v1[i]+v2[i]<=9){
//                 v3[i]=v1[i]+v2[i];
                
//             }
//             else{
//                 v3[i]=(v1[i]+v2[i])%10;
//                 v1[i-1]=v1[i-1]+1;
//             }
            
            
//         }
//          ListNode* l3=NULL;
//         ListNode **node=&l3;
       
//         for (int i = 0; i < v3.size(); i++){
//           (*node)=new ListNode(v3[i]);
//         }
        
//         return l3;
//     }
    
     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0;
        ListNode *l3=NULL;
        ListNode **node=&l3;
        while(l1!=NULL||l2!=NULL||sum>0)
        {
            if(l1!=NULL)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            (*node)=new ListNode(sum%10);
            sum/=10;
            node=&((*node)->next);
        }        
        return l3;
    }
};