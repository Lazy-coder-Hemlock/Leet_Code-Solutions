class Solution {
public:
    bool isValid(string s) {
        if(s.size()==0)
            return true;
        if(s.size()==1)
            return false;
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' or s[i]=='{' or s[i]=='[')
                st.push(s[i]);
            else{
                if(s[i]==')'){
                    if(st.empty())
                        st.push(s[i]);
                    else if(!st.empty() and st.top()!='(')
                        return false;
                    else
                        st.pop();
                }
                else if( s[i]=='}'){
                     if(st.empty())
                        st.push(s[i]);
                    else if(!st.empty() and st.top()!='{')
                        return false;
                    else
                        st.pop();
                }
                else if(s[i]==']'){
                     if(st.empty())
                        st.push(s[i]);
                    else if(!st.empty() and st.top()!='[')
                        return false;
                    else
                        st.pop();
                }
                    
            }
        }
        return st.empty()?true:false;
    }
};
