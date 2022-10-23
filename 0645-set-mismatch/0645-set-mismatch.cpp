class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        set<int> s;
        //vector<int> v;
        
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int repetive_no=accumulate(nums.begin(),nums.end(),0)-accumulate(s.begin(),s.end(),0);
        
        int n=nums.size()+1;
        
        int loss_no=n*(n-1)/2 -accumulate(s.begin(),s.end(),0);
        return {repetive_no,loss_no};
    }
};