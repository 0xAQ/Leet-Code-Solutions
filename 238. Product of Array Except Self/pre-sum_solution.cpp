class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        ans[0] = nums[0];

        for(int i = 1 ; i < n ; i++)
            ans[i] = nums[i]*ans[i-1];

        int right_product = nums[n-1];
        
        ans[n-1] = ans[n-2];
        for(int i = n-2 ; i >0; i--){
            ans[i] = ans[i-1]*right_product;
            right_product *= nums[i]; 
        }
        ans[0] = right_product;

        return ans;
    }
};
