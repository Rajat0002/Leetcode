class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        
        vector<int> v;
        for(auto i:s){
            v.push_back(i);
        }
        if(v.size()>=3){
            return v[v.size()-3];
        }
        
        return v[v.size()-1];
    }
};