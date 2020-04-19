class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>x(arr.size());
        x[0]=arr[0];
        for(int i=1;i<arr.size();i++)
            x[i]=x[i-1]^arr[i];
        vector<int>v;
        for(auto &i:queries){
            if(i[0]==0)
                v.push_back(x[i[1]]);
            else if(i[0]==i[1])
                v.push_back(arr[i[0]]);
            else{
                v.push_back(x[i[0]-1]^x[i[1]]);
            }
        }
    return v;
    
    }
};
