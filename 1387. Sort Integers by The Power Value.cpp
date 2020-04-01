class Solution {
public:
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>>v;
        for(int i=lo;i<=hi;i++){
        int x=get_power(i);
            v.push_back(make_pair(i,x));
    }
        sort(v.begin(),v.end(),comp);
        return v[k-1].first;
    }
    int get_power(int x){
         int count=0;
        while(x!=1){
        
            if(x%2==0){
                x=x/2;
                count++;
            }
            else{
                x=3*x+1;
                count++;
            }
            
        }
        return count;
    }
    static bool comp(const pair<int,int>&a,const pair<int,int>&b){
        if(a.second==b.second)
            return b.first>a.first;
        return b.second>a.second;
    }
};
