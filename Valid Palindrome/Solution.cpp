class Solution {
public:
    bool isPalindrome(string s) {
        string sn;
        for(int i = 0;i < s.size(); i++) {
            if(isalnum(s[i])) sn += tolower(s[i]);
        }
        int start = 0, end = sn.size()-1;
        while(start < end) {
            if(sn[start] != sn[end]) return false;
            start++;
            end--;
        }
        return true;
    }
};
