class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>res;
        for(auto i:words){
            if(check(i,pattern))
                res.push_back(i);
        }
        return res;
    }
    bool check(string s,string p){
        if(s.length()!=p.length())
            return false;
        set<char>st;
        map<char,char>m;
        for(int i=0;i<s.length();i++){
            char first=s[i];
            char second=p[i];
            if(m.find(s[i])!=m.end()){
                if(m[first]!=second)
                    return false;
            }
            else{
                if(st.find(second)!=st.end())
                    return false;
                m[first]=second;
                st.insert(second);
            }
        }
        return true;
    }
};
