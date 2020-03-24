class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>m;
        vector<int>v;
        for(int i=0;i<arr1.size();i++)m[arr1[i]]++;
        for(int i=0;i<arr2.size();i++){
            if(m.find(arr2[i])!=m.end()){
                while(m[arr2[i]]>0){
                    v.push_back(arr2[i]);
                    m[arr2[i]]--;
                }
                m.erase(arr2[i]);
            }
        }
        for(auto i:m){
            int f=i.second;
            while(f--){
                v.push_back(i.first);
            }
        }
        return v;
    }
};
