class Solution {
public:
    int compress(vector<char>& chars) {
        string res="";
        for(int i=0;i<chars.size();i++){
        int count=1;
            res+=chars[i];
            while(i+1<chars.size() && chars[i]==chars[i+1])
            count++,i++;
         if(count!=1)
             res+=to_string(count);
        }
        chars.clear();
        for(auto i:res)
            chars.push_back(i);
        return chars.size();
    }
};
