class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> ump, ump2;
        for(auto x:arr) {
            ump[x]++;
        }

        for(auto it:ump) {
            ump2[it.second]++;
            if(ump2[it.second] >= 2) {
                return false;
            }
        }

        return true;
    }
};
