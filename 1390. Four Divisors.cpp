class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int c=cal(nums[i]);
        sum+=c;
        }
        return sum;       
    }
    int cal(int n){
        int count=0;
        int res=0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
              count++;
                res+=i;
                if(i!=sqrt(n)){
                    count++;
                    res+=(n/i);
                }
            
            }
        }
        return count==4?res:0;
    }
};
