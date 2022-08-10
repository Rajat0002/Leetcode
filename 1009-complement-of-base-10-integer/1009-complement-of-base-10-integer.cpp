class Solution {
public:
    int bitwiseComplement(int n) {
        
//         int mask=0;
//         if(n==0){
//             return 1;
//         }
//         while(n!=0){
//             mask=(mask<<1) || 1;
//             n=n >> 1;
            
//         }
//         int ans=(~n) & mask;
        
//         return ans;
      
        int m = n;
        int mask = 0;
        
        if(n == 0)
            return 1;
        
        while( m!=0) {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        
        int ans = (~n) & mask;
        
        return ans;
        
    }
};