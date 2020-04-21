class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int size=nums.size()*nums[0].size();
        if(r*c>size){
            return nums;
        }
    vector<vector<int>>v(r,vector<int>(c,0));
            queue<int>q;
            for(int i=0;i<nums.size();i++){
                for(int j=0;j<nums[0].size();j++){
                    q.push(nums[i][j]);
                }
            }
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    v[i][j]=q.front();
                q.pop();
                }
            }
        return v;
    }
};
