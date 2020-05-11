class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int count=0,res=INT_MIN,store=0;
        if(is_sorted(arr.begin(),arr.end(),greater<int>()))
            return 1;
        else if(is_sorted(arr.begin(),arr.end()))
            return arr.size();
        else{       
    for(int i=0;i<arr.size();i++){
        res=max(res,arr[i]);
        if(res==i)count++;
    }
        }
        return count;
    }
};
