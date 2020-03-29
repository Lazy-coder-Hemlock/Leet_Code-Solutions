class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0)
            return true;
            int i,j;
            i=j=0;
            while(i<s.size() && j<t.size()){
                if(s[i]==t[j]){
                    i++;
                    j++;
                }
                else{
                    j++;
                }
                if(i==s.length())
                    return true;
            }
        return false;
        
    }
};
