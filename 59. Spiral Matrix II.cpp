class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n,vector<int>(n,0));
        if(n==0)
            return matrix;
        int k=0;
        int top=0;
        int down=matrix.size()-1;
        int left=0;
        int right=matrix[0].size()-1;
        int dir=0;
        while(left<=right && top<=down){
            if(dir==0){
                for(int i=left;i<=right;i++){
                    matrix[top][i]=++k;
                }
                top++;
            }
                else if(dir==1){
                    for(int i=top;i<=down;i++){
                        matrix[i][right]=++k;
                    }
                    right--;
                }
            else if(dir==2){
                for(int i=right;i>=left;i--){
                    matrix[down][i]=++k;
                }
                down--;
            }
            else if(dir==3){
                for(int i=down;i>=top;i--){
                    matrix[i][left]=++k;
                }
                left++;
            }
            dir=(dir+1)%4;
            }
    return matrix;
    }
    };
