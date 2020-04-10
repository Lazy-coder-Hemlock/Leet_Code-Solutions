class Solution {
public:
    int minAddToMakeValid(string S) {
     stack<char>st;
        for(int i=0;i<S.length();i++){
            if(st.empty())
                st.push(S[i]);
            else if(!st.empty() && st.top()=='(' && S[i]==')')
                st.pop();
            else
                st.push(S[i]);
        }
        return st.size();
    }
};
