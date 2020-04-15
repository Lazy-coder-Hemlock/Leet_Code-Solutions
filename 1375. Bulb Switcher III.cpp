class Solution {
public:
    int numTimesAllBlue(vector<int>& light) {
        int sum=0;
        int count=0;
        for(int i=0;i<light.size();i++){
            sum=max(sum,light[i]);
        if(sum==i+1)count++;
    }
    return count;}
};
