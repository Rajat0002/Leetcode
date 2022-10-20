class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int,string>> map{{1,"I"},{4,"IV"},{5,"V"},{9,"IX"},{10,"X"},{40,"XL"},{50,"L"},{90,"XC"},{100,"C"},{400,"CD"},{500,"D"}, {900, "CM"}, {1000, "M"}};
        string s="";
        
        int n=map.size()-1;
        while(num!=0){
            while(map[n].first>num){
                n--;
            }
            s+=map[n].second;
            num-=map[n].first;
        }
        return s;
    }
};