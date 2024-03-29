class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i =0; i < numRows; i++){
            ans.push_back({});
            for(int j =0 ; j<=i; j++){
                if(j ==0 || j == i) ans[i].emplace_back(1);
                else ans[i].emplace_back(ans[i-1][j-1]+ ans[i-1][j]);
            }
        }

        return ans;
    }
};
