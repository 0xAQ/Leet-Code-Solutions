class Solution {
public:
    void rev(vector<int>& nums, int start, int end){
        int i =start , j = end ;
        int temp;
        while( i <= j){
            temp =  nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++; j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k%(nums.size());
        rev(nums, 0, nums.size() -1);
        rev(nums, 0, k-1);
        rev(nums, k, nums.size() -1);
    }
};
