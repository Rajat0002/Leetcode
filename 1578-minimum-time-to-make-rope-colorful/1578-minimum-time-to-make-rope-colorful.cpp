class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int count=0;
        for(int i=0;i<neededTime.size()-1;i++){
            if(colors[i]==colors[i+1]){
                count+= min(neededTime[i],neededTime[i+1]);
                neededTime[i+1] = max(neededTime[i],neededTime[i+1]);
            }
        }
        return count;
    }
};