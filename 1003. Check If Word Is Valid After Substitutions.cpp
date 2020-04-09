class Solution {
public:
    bool isValid(string s){
       stack<char>st;
        for(int i=0;i<s.length();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(!st.empty() && s[i]=='c'){
                if(st.top()!='b')
                    return false;
                    st.pop();
                if(st.empty())
                    return false;
                    if(st.top()!='a')
                        return false;
                        st.pop();
                }
            else{
            
                st.push(s[i]);
            }
        }
        return true?st.empty():false;
    }
};
