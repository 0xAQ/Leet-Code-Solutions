class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        int left =0 , right = size - 1;
        int lmax = 0, rmax=0;
        int rainwater = 0;
        while(left <= right) {
            if(height[left] <= height[right]){
                if(height[left] >= lmax)
                    lmax = height[left];
                else
                    rainwater += lmax - height[left];
                left++;
            }else{
                if(height[right] >= rmax)
                    rmax = height[right];
                else
                    rainwater += rmax - height[right];
                right--;
            }
        }
        return rainwater;
    }
};
