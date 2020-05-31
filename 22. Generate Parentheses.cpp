class Solution {
    vector<string>result;
    bool check(string res){
        auto count=0;
        for(auto i:res){
            if(i=='(')count++;
            else{
                count--;
                if(count<0)
                    return false;
            }
        }
        return true;
    }
    void generate(int n){
        string store="";
        for(int i=0;i<n;i++)store+="()";
        sort(store.begin(),store.end());
        do{
            if(check(store))
                result.push_back(store);
        }while(next_permutation(store.begin(),store.end()));
    }
public:
    vector<string> generateParenthesis(int n) {
        generate(n);
        return result;
    }
};
