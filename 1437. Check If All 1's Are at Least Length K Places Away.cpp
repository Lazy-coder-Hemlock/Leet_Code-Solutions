class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        vector<int>store;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
                store.push_back(i);
        }
        for(int i=1;i<store.size();i++){
            if(store[i]-store[i-1]<k+1)
                return false;
        }
        return true;
    }
};
