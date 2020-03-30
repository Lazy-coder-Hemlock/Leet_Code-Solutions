class Solution {
public:
    vector<int> diStringMatch(string s) {
        int low=0;
        int high=s.size();
        vector<int>v;
        for(auto i:s)
        {
            if(i=='I'){
                v.push_back(low);
                low++;
            }
            else{
                v.push_back(high);
                high--;
            }
        }
        v.push_back(high);
    return v;
    }
};
