class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        if (m > n) 
            return findMedianSortedArrays(nums2, nums1);

        int l = 0, r = m;
        int midIdx = (m + n + 1) / 2; 

        while (l <= r) {
            int mid = l + (r - l)/2;
            int cen = midIdx - mid; 

            int nums1LeftMax = (mid == 0) ? INT_MIN : nums1[mid - 1];
            int nums2LeftMax = (cen == 0) ? INT_MIN : nums2[cen - 1];
            int nums1RightMin = (mid == m) ? INT_MAX : nums1[mid];
            int nums2RightMin = (cen == n) ? INT_MAX : nums2[cen]; 

            if (nums1LeftMax <= nums2RightMin && nums2LeftMax <= nums1RightMin){
                if ((m + n) % 2 == 0) 
                    return (max(nums1LeftMax, nums2LeftMax) + min(nums1RightMin, nums2RightMin)) / 2.0;
                else 
                    return max(nums1LeftMax, nums2LeftMax);
            }
            else if (nums1LeftMax > nums2RightMin) 
                r = mid - 1;
            else 
                l = mid + 1;
        }
        return 0.0;
    }
};
