class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int>v;
        for(auto i:A){
            v.push_back((int)pow(i,2));
        }
        sort(v.begin(),v.end());
        return v;
        
    }
};
