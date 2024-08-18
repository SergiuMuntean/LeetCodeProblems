class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix.at(0).size();
        int left{0}, right{rows * cols - 1};
        int mid{(left + right) / 2};
        while(left <= right) {
            mid = (left + right) / 2;
            int midValue = matrix.at(mid / cols).at(mid % cols);
            if(midValue == target) {
                return true;
            } else if(midValue < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return false;
    }
};
