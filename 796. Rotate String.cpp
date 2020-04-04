class Solution {
public:
    bool rotateString(string A, string B) {
        if(A.size()==0 && B.size()==0)return true;
        if(A.size()==0)return false;
        if(B.size()==0)return false;
        for(int i=0;i<A.size();i++){
            ::rotate(A.begin(),A.begin()+A.size()-1,A.end());
                if(A==B)
                    return true;
        }
        return false;
    }
};
