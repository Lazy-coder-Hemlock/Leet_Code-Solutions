class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());
        string store=folder[0];
        vector<string>res;
        res.push_back(store);
        store+='/';
        for(int i=1;i<folder.size();i++){
            size_t it=folder[i].find(store);
            if(it!=string::npos){
            }
            else{
                res.push_back(folder[i]);
                store=folder[i];
                store+='/';
            }
        }
        return res;
    }
};
