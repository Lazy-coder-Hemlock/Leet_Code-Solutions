class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==0)
            return 0;
        vector<int>v;
        for(int i=1;i<=sqrt(num);i++){
		if(num%i==0){
			v.push_back(i);
			if(i!=sqrt(num))
			v.push_back(num/i);
		}
        }
	int sum=accumulate(v.begin(),v.end(),0);
            sum-=num;
        return sum==num;
        
    }
};
