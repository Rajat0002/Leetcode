class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int sum=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
       
        for(int i=0;i<n;i++){
            int low=i+1;
            int high=n-1;
             if(nums[i] > 0) {
                    break;
                }
            if(i > 0 && nums[i] == nums[i-1]) {
                continue;
        }
            while(low<high){
                
                
               
                int currSum=nums[i]+nums[low]+nums[high];
                if(currSum==0){
                    vector<int> temp(3);
                    temp[0]=nums[i];
                    temp[1]=nums[low];
                    temp[2]=nums[high];
                                     
                    ans.push_back(temp);
                    low++;
                    high--;
                    while(low <high &&  nums[low]==nums[low-1]){
                        low++;
                    }
                    while(low<high&&nums[high]==nums[high+1]){
                        high--;
                    } 
                }
               
                else if(currSum<0){
                    low++;
                }
                else{
                    high--;
                }
                
            }
        }
        return ans;
    }
};