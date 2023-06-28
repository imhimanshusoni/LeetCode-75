class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = candies[0];
        vector<bool> v;
        for(int i=0;i<candies.size();++i) {
            maxi = max(candies[i],maxi);
        }
        for(int i=0;i<candies.size();++i) {
            if(extraCandies+candies[i]>=maxi) {
                v.push_back(true);
            } else if(extraCandies+candies[i]<maxi) {
                v.push_back(false);
            }
        }
        return v;
    }
};
