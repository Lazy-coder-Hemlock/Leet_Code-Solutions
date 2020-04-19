class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.size()==0)
            return 0;
        if(pal(s))
            return 1;
        return 2;
        
    }
    bool pal(string s){
        return s==string(s.rbegin(),s.rend());
    }
};
