class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        // unordered_set<int> s;
        // for(int i=0;i<nums.size();i++){
        //     s.insert(nums[i]);
        // }
        // if(s.size()==nums.size()){
        //     return false;
        // }
        // return true;
        
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m.count(nums[i]) > 0 && abs(m[nums[i]] - i) <= k)
			return true;
		    m[nums[i]] = i;
	        }
	     
          return false;

        }
    
};