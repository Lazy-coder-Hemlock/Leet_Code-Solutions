class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        set<int>s;
        int i=0;
        while(i<candies.size()){
            if(s.size()==candies.size()/2)
                break;
            s.insert(candies[i++]);
        }
        return s.size();
    }
};
