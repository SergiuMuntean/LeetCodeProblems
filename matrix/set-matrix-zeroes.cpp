class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> rows, cols;
        int m = matrix.size();
        int n = matrix.at(0).size();
        for(int i{0}; i < m; i++) {
            for(int j{0}; j < n; j++) {
                if(matrix[i][j] == 0) {
                    rows.push_back(i), cols.push_back(j);
                }
            }
        }
        for(auto x : rows) {
            for(int j{0}; j < n; j++) {
                matrix[x][j] = 0;
            }
        }
        for(auto y : cols) {
            for(int i{0}; i < m; i++) {
                matrix[i][y] = 0;
            }
        }
    }
};
