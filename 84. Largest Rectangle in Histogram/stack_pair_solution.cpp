class Solution {
public:
    int largestRectangleArea(vector<int>& nums) {
        stack<pair<int, int>> stack;
        int max = 0;
        int n = nums.size();
        for(int i = 0 ; i < n; i++){
            int index = i;
            if(!stack.empty()){
                while(!stack.empty() && nums[i] < stack.top().first){
                    int area = stack.top().first * (i - stack.top().second);
                    if (area > max) max = area;
                    index = stack.top().second;
                    stack.pop();
                }
            }
            stack.push({nums[i], index});
        }

        while(!stack.empty()){
            int area = stack.top().first * ( n - stack.top().second);
            if (area > max) max = area;
            stack.pop();
        }

        return max;
    }

    
};
