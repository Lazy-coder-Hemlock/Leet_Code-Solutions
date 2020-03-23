class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        sort(nums.begin(),nums.end());
        int low=0;
        int high=nums.size()-1;
        int count=0;
        while(low<=high){
            if(nums[low]+nums[high]<=limit){
                low++;
                high--;
            }
            else{
            high--;    
            }
            count++;
        }
        return count;
        }
};
