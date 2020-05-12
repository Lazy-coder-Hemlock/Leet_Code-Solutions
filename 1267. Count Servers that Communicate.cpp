class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int rows[grid.size()];
        int cols[grid[0].size()];
        memset(rows,0,sizeof(rows));
        memset(cols,0,sizeof(cols));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]){
                    rows[i]++;
                    cols[j]++;
                }
            }
        }
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] && (rows[i]>1 || cols[j]>1))
                    count++;
            }
        }
        return count;
    }
};
