class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     set<int>s;
        if(nums.size()==0)
            return 0;
        for(auto i:nums)s.insert(i);
        vector<int>v;
        for(auto i:s)v.push_back(i);
        int res=1;
        int len=1;
        for(int i=1;i<v.size();i++){
            if(v[i]-v[i-1]==1)
            {
                res=max(res,++len);
            }
            else
                len=1;
        }
        return res;
    }
};
