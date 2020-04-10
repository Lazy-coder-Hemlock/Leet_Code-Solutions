class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
       vector<int>v;
        for(int i=0;i<nums.size();i+=2){
            int count=nums[i];
            int value=nums[i+1];
            while(count--)
                v.push_back(value);
        }
        return v;
    }
};
