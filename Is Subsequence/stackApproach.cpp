class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0) return true;
        stack<char> st;
        for(int i=0;i<s.size();++i) {
            st.push(s[i]);
        }
        for(int i=t.size()-1;i>=0;--i) {
            if(!st.empty()) {
                if(t[i] == st.top()) st.pop();
            }
        }
        if(st.empty()) return true;
        else return false;
    }
};
