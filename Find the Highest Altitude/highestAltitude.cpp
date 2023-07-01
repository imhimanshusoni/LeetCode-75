class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int i=0, maxi = INT_MIN;
        for(auto it:gain) {
            i += it;
            maxi = max(i,maxi);
        }
        maxi = max(0, maxi);
        return maxi;
    }
};
