class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i{0}; i < n; i++) {
            for(int j{i + 1}; j < n; j++)  {
                swap(matrix.at(i).at(j), matrix.at(j).at(i));
            }
        }
        for(int i{0}; i < n; i++) {
            reverse(matrix.at(i).begin(), matrix.at(i).end());
        }
    }
};
