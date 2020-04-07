class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int count=0;
        sort(chars.begin(),chars.end());
        for(int i=0;i<words.size();i++){
            string s=words[i];
            sort(s.begin(),s.end());
            if(check(chars,s))
                count+=s.length();
        }
        return count;
    }
    bool check(string s,string t){
        int i,j;
        i=j=0;
        while(i<s.length() && j<t.length()){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else
                i++;
        }
        return j==t.length() ;
    }
};
