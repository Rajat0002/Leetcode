class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        int k=-1;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j] ){
                if(k==nums1[i]){
                    i++;
                    j++;
                }
                else{
                    nums3.push_back(nums1[i]);
                    k=nums1[i];
                    i++;
                    j++;
                }
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else {
                j++;
                 }
        }
        return nums3;
        
    }
};

//&& nums1[n]!=nums1[n-1]&&nums2[n]!=nums2[n-1]