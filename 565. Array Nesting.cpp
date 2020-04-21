class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        vector<bool>v(nums.size(),false);
        int count=0,ans=0;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            count=0;
            while(!v[x]){
                v[x]=true;
                count++;
                x=nums[x];
            }
            ans=max(ans,count);
        }
        return ans;
    }
};
