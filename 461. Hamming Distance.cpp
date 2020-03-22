class Solution {
public:
    int hammingDistance(int a, int b) {
        int count=0;
        for(int i=0;i<32;i++){
            if(((a>>i)&1)!=((b>>i)&1))
                count++;
        }
        return count;
    }
};
