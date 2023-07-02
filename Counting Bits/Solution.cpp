class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        int count=0;
        for(int i=0;i<=n;++i) {
            int t = i;
            while(t!=0) {
                if(t%2==1) count++;
                t /= 2;
            }
            ans.push_back(count);
            count = 0;
        }
        return ans;
    }
};
