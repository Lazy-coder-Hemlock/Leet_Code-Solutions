class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n=palindrome.length();
        if(n<=1)
            return "";
        for(int i=0;i<(palindrome.length()/2);i++){
            if(palindrome[i]!='a'){
                palindrome[i]='a';
            return palindrome;
        }
    }
        palindrome[n-1]='b';
        return palindrome;
    }
};
