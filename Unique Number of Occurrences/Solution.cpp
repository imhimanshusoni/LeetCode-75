class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> ump, ump2;
        int count=0;
        for(int i=0;i<arr.size();++i) {
            ump[arr[i]]++;
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
