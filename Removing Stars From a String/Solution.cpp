class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        string ss = "";
        for(int i=0;i<s.length();i++) {
            if(s[i]!='*') {
                st.push(s[i]);
            } else {
                st.pop();
            }
        }
        while(!st.empty()) {
            ss += st.top();
            st.pop();
        }
        reverse(ss.begin(),ss.end());
        return ss;
    }
};
