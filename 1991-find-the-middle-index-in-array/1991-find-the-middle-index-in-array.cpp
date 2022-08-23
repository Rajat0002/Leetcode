class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
        }
        int sum2=0;
        for(int i=0;i<n;i++){
            if(sum2== sum - sum2 - nums[i]){
                return i;
            }
            sum2+=nums[i];
        }
        return -1;
    }
};