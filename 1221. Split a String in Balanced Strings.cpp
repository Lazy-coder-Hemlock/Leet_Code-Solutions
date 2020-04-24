class Solution {
public:
    int balancedStringSplit(string s) {
       int l,r,count;
        l=r=count=0;
        for(auto i:s){
            if(i=='R')
                ++r;
            if(i=='L')
                ++l;
            if(r==l){
                ++count;
                l=r=0;
            }
        }
        return count;
    }
};
