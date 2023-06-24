class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        vector<vector<int>> ans;
        
        for(int i =0 ; i < n -2 ; i++){
            if(i ==0 || i !=0 && nums[i-1] != nums[i]){
                int l = i +1 ; int r = n -1;
                while( l < r){
                    if(nums[i] + nums[l] + nums[r] == 0){
                        ans.push_back({nums[i], nums[l], nums[r]});
                        while(l < r && nums[l] == nums[l+1]) l++;
                        while(l < r && nums[r-1] == nums[r]) r--;
                        l++; r--;
                    }
                    else if(nums[l] + nums[r] + nums[i] < 0){
                        l++;
                    }
                    else{
                        r--;
                    }
                }
            }
        }
        return ans;
    }
};
