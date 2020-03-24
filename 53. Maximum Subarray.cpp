class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far=INT_MIN;
        int max_ending=0;
        for(int i=0;i<nums.size();i++){
            max_ending+=nums[i];
            if(max_ending>max_so_far)
                max_so_far=max_ending;
            if(max_ending<0)
                max_ending=0;
        }
        return max_so_far;
        
    }
};
