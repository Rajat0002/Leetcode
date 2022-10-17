class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
       vector<string> ans;
        
        int n=nums.size();
		
        if(n == 0 ){
          return ans;
        }
		
        int x = nums[0];
        
        for(int i=0; i<n; i++)
        {
			
            if( i==n-1 || nums[i]+1!=nums[i+1])
            {
			   
                if(nums[i]!=x){
                    ans.push_back(to_string(x)+ "->"+  to_string(nums[i]));
                }

                else{
                        ans.push_back(to_string(x));
                }
						
				
                if(i != n-1){
                    x = nums[i+1];
                }
            }
        }
		
        return ans;
        
        
        
        //         vector<string> s;
//         int x=nums[0];
        
//         for(int i=0;i<nums.size();i++){
            
//             if(i == nums.size()-1 || nums[i+1]-nums[i]>1){
               
//                 if(nums[i]!=x){
//                 s.push_back(to_string(x)+"->"+to_string(nums[i]));
//                //x=nums[i+1];
//                 }
            
//                 else{
//                   s.push_back(to_string(x));
//                 }
//                 if(i != nums.size()-1){
//                     x= nums[i+1];
//                 }
//             }
//         }
//         return s;
    }
};