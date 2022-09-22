class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int left_letter=0;
        int right_letter=0;
        while(right_letter<n){
            
        while(right_letter<n && s[right_letter]!=' '){
            right_letter++;
        }
        reverse(s.begin() + left_letter, s.begin() + right_letter);
         
        left_letter=right_letter+1;
        
        right_letter++;
        }
        return s;
        
        }
        
    
};