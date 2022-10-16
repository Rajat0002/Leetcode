class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        
        
        unordered_set<int> data;
        int ret = 0;
        for(auto const &i: nums) {
            data.insert(i);
            if(data.count(i-diff) && data.count(i-diff*2)){
                ++ret; 
            }
        }
        return ret;
    
        
//         int n=nums.size();
//         map<int,int> m;
        
//         for(int i=0; i<n;i++){
//             int j=i+1;
//             int k=n-1;
//             if()
            
//         }
         
        
//         int ans = 0 ;
//     for(int i = 0 ; i < nums.size()-2 ; i++)
//     {
//         for(int j = i+1 ; j < nums.size()-1 ; j++)
//         {
//             if(nums[i]+diff==nums[j])
//             {
//             for(int k = j +1; k < nums.size(); k++)
//               {
//                 if(nums[j]+diff==nums[k])
//                    ans++;
//               }
//             }
//         }
//     }
//     return ans;
    }
};