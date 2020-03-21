class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        int res=INT_MIN;
        for(int i=0;i<nums.size();i++)m[nums[i]]++;
        int store=0;
        for(auto i:m){
            if(i.second>res){
                res=i.second;
                store=i.first;
            }
        }
        return store;
    }
};
