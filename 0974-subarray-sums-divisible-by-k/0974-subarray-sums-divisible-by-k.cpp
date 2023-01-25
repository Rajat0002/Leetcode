class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // int count=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]%k==0){
        //        count++;
        //     }
        // }
        // int sum=0;
        // for(int i=0;i<nums.size();i++){
        //     sum+=nums[i];
        //     if(sum%k==0){
        //         count++;
        //     }
        //     else{
        //         sum=0;
        //     }
        // }
        int n = nums.size();
        vector<int> sums(k, 0);
        sums[0]++;
        int cnt = 0;
        int currSum = 0;
        for(int i = 0; i<n; i++) {
            currSum = (currSum + nums[i]%k + k)%k;
            cnt += sums[currSum];
            sums[currSum]++;
        }
        return cnt;
     
    }
};