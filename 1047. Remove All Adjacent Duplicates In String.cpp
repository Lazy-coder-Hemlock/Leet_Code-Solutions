class Solution {
public:
    string removeDuplicates(string S) {
        stack<char>st;
        string result="";
        for(int i=0;i<S.length();i++)
        {
            if(!st.empty() and S[i]==st.top())
            {
                st.pop();
            }
            else{
                st.push(S[i]);
            }
        }
        while(!st.empty()){
            char u=st.top();
            result+=u;
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
