class Solution {
public:
    int romanToInt(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i] == 'I' && s[i+1] != 'V' && s[i+1] != 'X') { 
                count = count + 1;
            }
            else if(s[i] == 'I' && s[i+1] == 'V') {  
                count = count + 4;
                i++;
            }
            else if(s[i] == 'I' && s[i+1] == 'X') { 
                count = count + 9;
                i++;
            }
            else if(s[i] == 'X' && s[i+1] != 'L' && s[i+1] != 'C') { 
                count = count + 10;
            }
            else if(s[i] == 'X' && s[i+1] == 'L') { 
                count = count + 40;
                i++;
            }
            else if(s[i] == 'X' && s[i+1] == 'C') { 
                count = count + 90;
                i++;
            }
            else if(s[i] == 'C' && s[i+1] != 'D' && s[i+1] != 'M') { 
                count = count + 100;
            }
            else if(s[i] == 'C' && s[i+1] == 'D') { 
                count = count + 400;
                i++;
            }
            else if(s[i] == 'C' && s[i+1] == 'M') { 
                count = count + 900;
                i++;
            }
            else if(s[i] == 'V') {  
                count = count + 5;
            }
            else if(s[i] == 'L') {  
                count = count + 50;
            }
            else if(s[i] == 'D') {  
                count = count + 500;
            }
            else {  
                count = count + 1000;
            }
            }
        return count;
    }
};