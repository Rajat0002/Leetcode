class Solution {
public:
    int minjump(int i,vector<int>& nums,vector<int>& dp){
        if(i >= nums.size()-1){
            return 0;
        }
        if (dp[i] != -1 ) return dp[i];
        int mini= 1e9;
        for(int k=i+1;k<=i+nums[i];k++){
            mini = min(mini,1+minjump(k,nums,dp));
        }
        return dp[i]=mini;
    }
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,-1);
        return minjump(0,nums,dp);
    }
};