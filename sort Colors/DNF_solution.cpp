class Solution {
public:
    void swap(int *a, int *b){
        int t;
        t = *a;
        *a = *b;
        *b = t;
    }
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i = 0, low = 0, high = n-1;
        while(i <= high){
            if(nums[i] == 0)
                swap(&nums[i++], &nums[low++]);
            else if(nums[i] == 1)
                i++;
            else
                swap(&nums[i], &nums[high--]);
        } 
    }
};
