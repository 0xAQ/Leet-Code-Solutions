class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<int> ans;
        
        for (int num : nums)
            freq[num]++;
        
        priority_queue<pair<int, int>> maxHeap;
        
        for (auto& pair : freq)
            maxHeap.push({ pair.second, pair.first });
        
        for (int i = 0; i < k; i++) {
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        
        return ans;
    }
};
