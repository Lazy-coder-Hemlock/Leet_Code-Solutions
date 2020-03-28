class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int count=1;
        int res=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1])
                count++;
            else{
           res=max(res,count); 
          count=1; 
            }
        }
        res=max(res,count);
        return res;
    }
};
