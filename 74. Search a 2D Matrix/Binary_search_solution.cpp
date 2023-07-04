class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int row = 0;

        int top = 0, bottom = m - 1;
        while (top <= bottom ){
            row = top + (bottom - top) / 2;
            if(target < matrix[row][0])
                bottom = row -1;
            else if(target > matrix[row][n-1])
                top = row +1;
            else break;
        }

        if  ( top > bottom) return false;
        
        int l  = 0 , r = n -1;
        while(l <= r){
            int c = l + (r - l) / 2;
            if (matrix[row][c] == target) 
                return true;
            else if(matrix[row][c] < target)
                l = c +1;
            else
                r = c -1;
        }
        return false;
    }
};
