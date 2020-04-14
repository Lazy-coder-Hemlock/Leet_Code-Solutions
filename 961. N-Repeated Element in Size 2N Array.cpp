class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int n=A.size()/2;
        map<int,int>m;
        for(int i=0;i<A.size();i++)m[A[i]]++;
        for(auto i:m){
            if(i.second==n)
                return i.first;
        }
        return -1;
    }
};
