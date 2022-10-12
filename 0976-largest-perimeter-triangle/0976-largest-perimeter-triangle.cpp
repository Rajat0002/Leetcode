class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int n=nums.size()-1;
        for(int j=n;j>1;j--){
        
            if(nums[j]<nums[j-1]+nums[j-2]){
            return nums[j]+nums[j-1]+nums[j-2];
        }
        }
        return 0;
    
    }
};