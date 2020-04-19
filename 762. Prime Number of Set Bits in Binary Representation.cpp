class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        int count=0;
        for(int i=L;i<=R;i++){
            int bit=bit_count(i);
            if(check_prime(bit))
                count++;
        }
        return count;
    }
       static bool check_prime(int n){
        if(n<2)
            return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
    }
    int bit_count(int n){
        int count=0;
        while(n>0){
            n=n&n-1;
            count++;
        }
        return count;
    }
};
