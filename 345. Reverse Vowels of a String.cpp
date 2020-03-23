class Solution {
public:
    string reverseVowels(string s) {
        int low=0;
        int high=s.length()-1;
        while(low<high){
            if(isvowel(s[low]) && isvowel(s[high])){
                swap(s[low],s[high]);
                low++;
                high--;
            }
            else if(isvowel(s[low]) && !isvowel(s[high]))
                high--;
              else
            low++;
    }
        return s;
    }
     bool isvowel(char a){
        if(a=='A' || a=='E' || a=='I' || a=='O' or a=='U' || a=='e' || a=='a' || a=='i' || a=='o' || a=='u')
            return true;
         return false;
     }
};
