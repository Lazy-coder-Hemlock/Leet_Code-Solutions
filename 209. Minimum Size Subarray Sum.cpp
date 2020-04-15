class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
    if(nums.size()==0)
        return 0;
        int sum=0;
        int low=0;
        int res=INT_MAX;
    for(int i=0;i<nums.size();i++)
    {sum+=nums[i];
        while(sum>=s){
            res=min(res,i-low+1);
            sum-=nums[low++];
        }
    }
    return res==INT_MAX?0:res;
    }
};
