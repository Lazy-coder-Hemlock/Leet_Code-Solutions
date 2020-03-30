class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<char>v;
        for(auto i:letters){
            if(i>target){
                v.push_back(i);
            }
        }
        if(v.size()==0)
            return *min_element(letters.begin(),letters.end());
        return *min_element(v.begin(),v.end());
        
        
    }
};
