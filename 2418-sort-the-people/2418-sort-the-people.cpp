class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
       
        vector<pair<int,string>> v;
        for(int i=0;i<heights.size();i++){
            v.push_back({heights[i],names[i]});
        }
        sort(v.begin(),v.end(),greater<>());
        vector<string> ans;
        
        for(auto it : v){
            ans.push_back(it.second);
        }
        return ans;
    }
};