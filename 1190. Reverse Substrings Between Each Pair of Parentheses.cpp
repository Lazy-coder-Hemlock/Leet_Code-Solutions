class Solution {
public:
    string reverseParentheses(string s) {
         stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]!=')')
            st.push(s[i]);
            else{
                string store="";
                while(!st.empty() && st.top()!='(')
                {
                    store+=st.top();
                    st.pop();
                }
                st.pop();
                for(int j=0;j<store.length();j++)st.push(store[j]);
            }
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};
