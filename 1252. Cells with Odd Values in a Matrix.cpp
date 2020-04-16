class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int arr[n][m];
        memset(arr,0,sizeof(arr));
        for(auto i:indices){
            int row=i[0];
            int column=i[1];
            for(int j=0;j<m;j++)arr[row][j]++;
            for(int j=0;j<n;j++)arr[j][column]++;
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]&1==1)
                    count++;
            }
        }
        return count;
    }
};
