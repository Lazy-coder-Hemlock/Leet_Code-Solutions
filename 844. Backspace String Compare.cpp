class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char>s;
        stack<char>t;
        for(int i=0;i<S.length();i++){
            if(s.empty() and S[i]=='#')
                ;
            else if(!s.empty() and S[i]=='#'){
                s.pop();
            }
            else
                s.push(S[i]);
        }
                for(int i=0;i<T.length();i++){
                    if(t.empty() and T[i]=='#')
                        ;
                    else if(!t.empty() and T[i]=='#'){
                        t.pop();
                    }
                    else
                        t.push(T[i]);
                }
        string first="";
        string last="";
        while(!s.empty())
        {
            first+=s.top();
            s.pop();
        }
        while(!t.empty()){
            last+=t.top();
            t.pop();
        }
        reverse(first.begin(),first.end());
        reverse(last.begin(),last.end());
        return first==last;
                
        }
    
};
