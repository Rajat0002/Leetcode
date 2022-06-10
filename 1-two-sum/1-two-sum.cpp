class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int k=i+1;k<nums.size();k++){
                if(nums[k]==target-nums[i]){
                    return {i,k};
                }
                
            }
        }
        return {-1,-1};
    }
};