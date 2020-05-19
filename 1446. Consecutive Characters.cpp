class Solution {
public:
    int maxPower(string s) {
        int res=INT_MIN;
        for(int i=0;i<s.length();i++){
            int count=1;
            while(i+1<s.length() && s[i]==s[i+1]){
                count++,i++;
            }
            res=max(count,res);
        }
        return res;
    }
};
