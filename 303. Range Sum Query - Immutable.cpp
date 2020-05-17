class NumArray {
public:
    vector<int>v;
    NumArray(vector<int>& nums) {
        if(!nums.size())
            return;
        v.resize(nums.size());
        v[0]=nums[0];
        for(int i=1;i<nums.size();i++)
            v[i]=nums[i]+v[i-1];
    }
    
    int sumRange(int i, int j) {
        if(i!=0)
        return v[j]-v[i-1];
        return v[j];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
