class Solution {
public:
    bool isHappy(int n){
set<int>s;
while(1){
n=square(n);
if(n==1)
return true;
else
if(s.find(n)!=s.end())
return false;
s.insert(n);
}
}
   int square(int n){
	int res=0;
	while(n!=0){
		int r=n%10;
		res+=r*r;
		n/=10;
	}
	return res;
}
};
