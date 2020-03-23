class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
       string ans="";
        for(auto i:d){
           if(checker(s,i)){
               if(i.length()>ans.length())
                   ans=i;
               else if(i.length()==ans.length())
                   ans=min(i,ans);
           }
       }
    return ans;
    }
    bool checker(string s1,string s2){
        int i,j,k;
        i=j=k=0;
        while(i<s1.length() && j<s2.length()){
            if(s1[i]==s2[j])
            {
                i++;
                j++;
            }
            else
                i++;

        }
        return j==s2.length();
    }
};
