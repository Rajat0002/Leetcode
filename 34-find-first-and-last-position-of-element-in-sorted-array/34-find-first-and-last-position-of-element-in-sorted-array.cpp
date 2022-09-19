class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int Starting=search(nums,target,true);
        int Ending=search(nums,target,false);
    
        result.push_back(Starting);
        result.push_back(Ending);
        return result;
        
    }
    int search(vector<int> & nums, int target,bool check) {
    int s=0,e=nums.size()-1,mid,ans=-1;

    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(target<nums[mid])
            e=mid-1;
        else if(target>nums[mid])
            s=mid+1;
        else
        {
            ans=mid;
            if(check)
                e=mid-1;
            else
                s=mid+1;
        }
            
    }
    return ans;
}
};