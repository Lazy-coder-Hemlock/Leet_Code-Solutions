class Solution {
public:
    int arrangeCoins(int n) {
        long int i;
        long int sum=0;
        for(i=1;;i++)
        {
            sum+=i;
            if(sum==n)
                return i;
            else if(sum>n){
                return --i;
            }
        }
    }
};
