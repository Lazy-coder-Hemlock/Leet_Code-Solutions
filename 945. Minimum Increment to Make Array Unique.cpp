class Solution {
public:
    int minIncrementForUnique(vector<int>& A) {
     if(!A.size())
            return 0; 
        sort(A.begin(),A.end());
          int count=0;
          for(int i=0;i<A.size()-1;i++){
              if(A[i]==A[i+1]){
                  A[i+1]=++A[i+1];
                  ++count;
              }
              else if(A[i]>A[i+1]){
                  count+=A[i]-A[i+1]+1;
                 A[i+1]=++A[i];
              }
          }
          return count;
    }
};
