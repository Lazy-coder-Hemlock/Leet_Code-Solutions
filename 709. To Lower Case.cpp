class Solution {
public:
    string toLowerCase(string str) {
        for(int i=0;i<str.length();i++){
            if(int(str[i])>=65 and int(str[i])<=90){
                str[i]=str[i]+32;
            }
        }
        return str;
    }
};
