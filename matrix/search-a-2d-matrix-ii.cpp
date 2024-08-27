class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(target < matrix[0][0]) {
            return false;
        }
        int rows = matrix.size();
        int cols = matrix.at(0).size();
        int i{0}, j{cols - 1};
        while(i < rows && j >= 0) {
            if(matrix[i][j] == target) {
                return true;
            }
            else if(target > matrix[i][j]) {
                i++;
            }
            else {
                j--;
            }
        }
        return false;
    }
};
