class Solution {
public:
    string countAndSay(int n) {
        
//         string m=to_string(n);
//         int k=m.length();
//         for(int i=0;i<k;i++){
            
//         }
     
        if(n==1){
            return "1";
        }
        if(n==2){
            return "11";
        }
         string m="11";
        
        for(int i=3;i<=n;i++){
           string temp="";
            m+="&";
            int count=1;
            for(int j=1;j<m.size();j++){
                if(m[j]!=m[j-1]){
                    temp=temp+to_string(count);
                    temp+=m[j-1];
                    count=1;
                }
                else{
                    count++;
                }
            }
            m=temp;
        }
        return m;
    }
};