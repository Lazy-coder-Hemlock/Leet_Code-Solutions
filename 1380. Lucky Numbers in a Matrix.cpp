class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>v;
        vector<int>v1;
        for(int i=0;i<matrix.size();i++){
              int q=INT_MAX;
            for(int j=0;j<matrix[0].size();j++){
                q=min(q,matrix[i][j]);
            }
            v.push_back(q);
            q=INT_MAX;
        }
        for(int i=0;i<matrix[0].size();i++){
            int q=INT_MIN;
            for(int j=0;j<matrix.size();j++){
                q=max(q,matrix[j][i]);
            }
            v1.push_back(q);
            q=INT_MIN;
        }
        vector<int>res;
        vector<int>::iterator it;
        for(int i=0;i<v.size();i++){
            it=find(v1.begin(),v1.end(),v[i]);
            if(it!=v1.end()){
                res.push_back(v[i]);
            }
        }
        return res;  
    }
};
