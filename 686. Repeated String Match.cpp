class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        int count=1;
        string prev=A;
        while(A.length()<10001){
            size_t it=A.find(B);
            if(it!=string::npos)
                return count;
            count++;
            A.append(prev);
        }
        return -1;
    }
};
