#include<stdlib.h>
class Solution {
public:
    string toHex(int num) {
        stringstream ss;;
        ss<<hex<<num;
        string result=ss.str();
        return result;
    }
};
