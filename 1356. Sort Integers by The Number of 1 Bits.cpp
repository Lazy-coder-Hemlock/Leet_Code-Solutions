class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
sort(arr.begin(),arr.end(),co);
          return arr;
    }
static bool co(int a,int b){
int counta=__builtin_popcount(a);
int countb=__builtin_popcount(b);
    if(counta==countb)
        return b>a;
        return countb>counta;
    
}
};
