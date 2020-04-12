class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
 vector<int>even;
        vector<int>odd;
        for(int i=0;i<A.size();i++){
            if(A[i]%2==0)
                even.push_back(A[i]);
        else
            odd.push_back(A[i]);
        }
        int oi=0;
        int ei=0;
        vector<int>v;
        for(int i=0;i<A.size();i++)
        {
            if(i%2==0)
                v.push_back(even[ei++]);
            else
                v.push_back(odd[oi++]);
        }
        return v;
    }
};
