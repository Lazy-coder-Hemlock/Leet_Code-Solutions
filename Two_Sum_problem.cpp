class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        vector<int>v;
        for(int i=0;i<nums.size();i++)m[nums[i]]=i;
        for(int i=0;i<nums.size();i++){
            int res=target-nums[i];
            if(m.find(res)!=m.end() and m[res]!=i){
                v.push_back(i);
                v.push_back(m[res]);
                return v;
            }
        }
        return v;
    }
};
