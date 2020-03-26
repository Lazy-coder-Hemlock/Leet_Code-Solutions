class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string>st;
        string tab[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
            for(int i=0;i<words.size();i++){
                string str="";
                string store=words[i];
                for(int j=0;j<store.length();j++){
                    str+=tab[store[j]-'a'];
                }
                st.insert(str);
            }
    return st.size();
    }
};
