class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        deque<int> monoQueue;

        for(int i =0; i< k;i++){
            while (!monoQueue.empty() && nums[i] >= nums[monoQueue.back()]) 
                monoQueue.pop_back();
            monoQueue.push_back(i);
        }
        ans.push_back(nums[monoQueue.front()]);
        for(int i = k ; i < n; i++){
            if(!monoQueue.empty() && i-k >= monoQueue.front())
                monoQueue.pop_front();
            while (!monoQueue.empty() && nums[i] >= nums[monoQueue.back()]) 
                monoQueue.pop_back();
            monoQueue.push_back(i);
            ans.push_back(nums[monoQueue.front()]);
        }
        return ans;

    }
};
