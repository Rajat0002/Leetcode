class Solution {
public:
    double myPow(double x, int n) {
        if(n==1){
            return x;
        }
        
        return pow(x,n);
    }
};