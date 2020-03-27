class Solution {
public:
    bool isMonotonic(vector<int>& A) {
       
       return (isincreasing(A) || isdecreasing(A));
       }
    static bool isincreasing(vector<int>& A){
        for(int i=1;i<A.size();i++){
            if(A[i]<A[i-1])
                return false;
        }
        return true;
    }
    static bool isdecreasing(vector<int>& A){
        for(int i=1;i<A.size();i++){
            if(A[i]>A[i-1])
                return false;
        }
        return true;
    }
};
