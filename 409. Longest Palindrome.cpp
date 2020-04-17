class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>m;
        for(int i=0;i<s.length();i++)m[s[i]]++;
        int res=0;
        bool b=false;
        for(auto i:m){
            if((i.second&1)==0)
                res+=i.second;
            else{
                if(i.second>1)
                    res+=i.second-1;
                    b=true;
            }
        }
        if(b==true)
             ++res;
        return res;
    }
};
