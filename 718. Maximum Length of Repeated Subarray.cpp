class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        int dp[A.size()+1][B.size()+1];
        int m=0;
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=A.size();i++){
            for(int j=1;j<=B.size();j++){
                if(A[i-1]==B[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                    m=max(m,dp[i][j]);
                }
                else
                    dp[i][j]=0;
            }
        }
        return m;
    }
};
