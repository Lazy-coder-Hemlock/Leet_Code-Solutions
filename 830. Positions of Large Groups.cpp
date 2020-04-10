class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>>v;
        for(int i=0;i<S.length();i++){
            int count=1;
            while(i+1<S.length() && S[i]==S[i+1]){
                count++;
                i++;
            }
            if(count>=3){
                v.push_back({i-count+1,i});
            }
        }
        return v;
    }
};
