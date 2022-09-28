class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        int x;
        for(int i=n;i>=0;i--){
            if (digits[i]==9){
                digits[i]=0;
                if (i-1>=0){
                    if (digits[i-1] != 9){
                       digits[i-1] +=1; 
                        return digits;
                    } 
                } 
                else{
                    digits.insert(digits.begin()+0, 1);
                }
                } else {
                    digits[i] += 1;
                     return digits;
            }
            }
        
        return digits;
    }
};