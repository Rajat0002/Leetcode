class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        
        int closestSum=nums[0]+nums[1]+nums[2];
        
        for(int i=0;i<nums.size()-2;i++){
            int low=i+1;
            int high=nums.size()-1;
            
            while(low<high){
                
                int currentSum=nums[i]+nums[low]+nums[high];
                
                if(closestSum==target){
                    return target;
                }
                
                if(abs(currentSum - target) < abs(closestSum - target)) {
                    closestSum = currentSum;
                }
               
                if(currentSum < target){
                    low++;
                }
                else if(currentSum > target){
                    high--;
                }
                else{
                    return target;
                }
                
            }
        }
        return closestSum;
    }
};