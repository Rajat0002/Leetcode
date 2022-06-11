class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int small=prices[0];
        int ans=0;
        for(int i=0;i<n;i++){
            if(small>prices[i]){
                small=prices[i];
                
            }
            else{
                int profit=prices[i]-small;
                ans=max(profit,ans);
            }
            
                
        }
        return ans;
    }
};