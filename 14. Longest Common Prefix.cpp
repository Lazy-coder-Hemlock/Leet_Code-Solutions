class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
            return "";
        string first=strs[0];
        for(int i=1;i<strs.size();i++){
            first=check(first,strs[i]);
        }
        return first;
    }
    string check(string s1,string s2){
        string result="";
        int i,j;
        i=j=0;
        for(int i=0,j=0;i<s1.length() && j<s2.length();i++,j++){
            if(s1[i]!=s2[j])
                break;
            result+=s1[i];
        }
        return result;
    }
    
};
