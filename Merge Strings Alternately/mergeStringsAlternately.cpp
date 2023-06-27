class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str;
        int length=min(word1.length(),word2.length());
        for(int i=0;i<length;++i) {
            str += word1[i];
            str += word2[i];
        }
        if(word1.length()>word2.length()) {
            str += word1.substr(length);
        } else if(word2.length() > word1.length()) {
            str += word2.substr(length);
        }
        return str;
    }
};
