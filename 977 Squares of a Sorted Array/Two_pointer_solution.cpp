class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int l = 0 , h = nums.size() -1;
        int m = nums.size() -1;
        while (l <= h) {
            if (abs(nums[l]) < abs(nums[h])) {
                ans[m--] = nums[h] * nums[h];
                h--;
            } else {
                ans[m--] = nums[l] * nums[l];
                l++;
            }
        }
        return ans;
    }
        
};
