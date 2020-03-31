class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
  map<int,int>m;
        for(int i=0;i<nums.size();i++)m[nums[i]]++;
        vector<int>v;
        for(auto i:m){
            if(i.second>2){
                for(int j=0;j<2;j++)v.push_back(i.first);
            }
            else{
                for(int j=0;j<i.second;j++)v.push_back(i.first);
            }
        }
        nums.clear();
        nums=v;
        return nums.size();
    }
};
