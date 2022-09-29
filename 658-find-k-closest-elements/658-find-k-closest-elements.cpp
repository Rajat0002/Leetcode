class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> v;
        priority_queue<int> p;
        map<int,vector<int>> m;
        
        
        int diff = 0;
        for (int i : arr) {
            diff = abs(i-x);
            
            if (m.find(diff) != m.end())
                m[diff].push_back(i);
            else
                m.insert(pair<int, vector<int>>(diff, {i}));
        }
        
        
        for (auto pair:m){
            for (int i : pair.second){
                if (k >=1 ){
                    v.push_back(i);
                    k-=1;
                }
                else
                    break;
            }
            if (k < 1)
                break;
        }
        
        sort(v.begin(),v.end());
       
        return v;
        
    }
};