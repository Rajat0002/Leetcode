class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        unordered_set<char> s(sentence.begin(), sentence.end());
        
        if(s.size()==26){
            return true;
        }
        return false;
    }
};