class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int max=0;
        for(auto it : m){
            if(it.second > max)
                max = it.second;
        }
        
         int ans;
        for(auto it : m){
            if(it.second == max)
                ans = it.first;
        }
        
        return ans;   
        }
            
        
    
};