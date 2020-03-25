class Solution {
public:
    bool checkRecord(string s) {
        int a,l,p;
        a=l=p=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A'){
                a++;
                l=0;
            }
            else if(s[i]=='P'){
                p++;
            l=0;}
            else{
                l++;
                if(l>2)
                    return false;
        }}
        if(a>1)
            return false;
        return true;
        
    }
};
