class Solution {
public:
    string customSortString(string S, string T) {
        map<char,int>m;
        for(int i=0;i<T.length();i++)m[T[i]]++;
        string res="";
        for(int i=0;i<S.length();i++){
            if(m.find(S[i])!=m.end()){
                while(m[S[i]]--){
                    res+=S[i];
                }
            }
            m.erase(S[i]);
        }
        for(auto i:m){
            while(i.second--){
                res+=i.first;
            }
        }
        return res;
        
    }
};
