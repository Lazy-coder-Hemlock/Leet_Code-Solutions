class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       vector<int>v;
        if(matrix.size()==0)
           return v;
        int top=0;
        int left=0;
        int right=matrix[0].size()-1;
        int down=matrix.size()-1;
        int dir=0;
        
        while(top<=down && left<=right){
            if(dir==0){
                for(int i=left;i<=right;i++){
                    v.push_back(matrix[top][i]);
                }
                top++;
            }
            else if(dir==1){
                for(int i=top;i<=down;i++){
                    v.push_back(matrix[i][right]);
                }
                right--;
            }
            else if(dir==2){
                for(int i=right;i>=left;i--){
                    v.push_back(matrix[down][i]);
                }
                down--;
            }
            else if(dir==3){
                for(int i=down;i>=top;i--){
                    v.push_back(matrix[i][left]);
                }
                left++;
            }
            dir=(dir+1)%4;
        }
        return v;
    }
};
