class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums .size();
        int l =0, r =n - 1;
        int m = l + (r -l)/2;
        while(l<=r){
            if(m ==0 || m == n-1) return nums[m];
            if(nums[m] == nums[m-1]){
                if((l - m-1) %2 == 0 ) l = m+1;
                else r = m - 2;
            }
            else if(nums[m] == nums[m+1]){
                if((l-m)%2 == 0) l = m+2;
                else r = m -1;
            }
            else return nums[m];
            m = l + (r -l)/2;
        }
        return nums[m];
    }
};
