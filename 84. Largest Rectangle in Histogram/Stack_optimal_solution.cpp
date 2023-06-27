class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int n=heights.size();
        int maxArea=0;
        stack<int>st;

        for(int i=0;i<=n;i++){   
            while(!st.empty() && (i==n || heights[st.top()]>=heights[i])){
                int height=heights[st.top()];

                st.pop();

                int width;
                if(st.empty()) width=i;
                else width=i-st.top()-1;
                
                int area=height*width;

                maxArea=max(maxArea,area);
            }
            st.push(i);
        }
        return maxArea;
    }
};
