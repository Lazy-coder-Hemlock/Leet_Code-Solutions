class Solution {
public:
    int numMatchingSubseq(string S, vector<string>& words) {
        int count=0;
        map<string,int>m;
        for(int i=0;i<words.size();i++)m[words[i]]++;
        for(auto i:m){
            if(check(S,i.first))
                count+=i.second;
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
        return j==t.length()?true:false;
    }
};
