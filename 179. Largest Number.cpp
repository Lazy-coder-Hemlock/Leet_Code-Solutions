class Solution {
public:
    string largestNumber(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        vector<string>v;
        for(int i=0;i<nums.size();i++)
            v.push_back(to_string(nums[i]));
        sort(v.begin(),v.end(),compare);
        string res="";
        if(v[0]=="0")
            return "0";
        for(int i=0;i<v.size();i++)res+=v[i];
        return res;
        
    }
    static bool compare(string a,string b){
        string ab=a+b;
        string ba=b+a;
        return ab>ba;
    }
};
