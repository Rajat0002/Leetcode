class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count=0;
        int res=1;
        if(nums.size()==0){
            return 0;
        }
        for(int i=0;i<nums.size()-1;i++){
            
            if(nums[i]<nums[i+1]){
                count++;
            }
            else{
                res=max(res,count+1);
                count=0;
            }
        }
        return max(res,count+1);
    }
};