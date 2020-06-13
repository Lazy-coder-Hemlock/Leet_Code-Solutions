class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        for(int i=left;i<=right;i++)
            if(result(i))v.push_back(i);
        return v;
    }
    bool result(int n){
        int x=n;
        while(x>0){
            int r=x%10;
            x/=10;
            if(r==0 || (n%r)>0)
                return 0;
        }
        return 1;
    }
};
