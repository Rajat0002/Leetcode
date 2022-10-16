class Solution {
public:
    bool isAnagram(string s, string t) {
//         if(s.size()!=t.size()){
//             return false;
//         }
//         unordered_map<char,int> m1,m2;
        
//         for(char c:s){
//             m1[c]++;
//         }
//         for(char c:t){
//             m2[c]++;
//         }
//         for(int i=0;i<s.size();i++){
//             if(m1[s[i]]!=m2[s[i]]){
//                 return false;
//             }
            
//         }
//         return true;
        
        
        if(s.size()!=t.size()){
             return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s!=t){
            return false;
        }
        return true;
    }
};