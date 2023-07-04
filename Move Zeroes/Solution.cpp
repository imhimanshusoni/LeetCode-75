class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0, right = 0, n = nums.size();
        if(n == 0 || n == 1) return;
        while(right < n) {
            if(nums[right] != 0) {
                int temp = nums[right];
                nums[right] = nums[left];
                nums[left] = temp;
                left++;
                right++;
            } else if(nums[right] == 0) {
                right++;
            }
        }
    }
};
