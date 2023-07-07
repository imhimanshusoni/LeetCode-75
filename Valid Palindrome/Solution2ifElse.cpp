class Solution {
public:
    bool isPalindrome(string s) {
        string sn;
        for(int i = 0;i < s.size(); i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                sn += tolower(s[i]);
            } else if(s[i] >= 'a' && s[i] <= 'z') {
                sn += s[i];
            } else if(s[i] >= 48 && s[i] <= 57) {
                sn += s[i];
            }
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
