class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int len = mat.size();
        for(size_t i{0}; i < len; i++) {
            sum += mat[i][i] + mat[i][len - 1 - i];
        }
        int val = len / 2;
        if(len % 2 == 1) {
            sum -= mat[val][val];
        }
        return sum;
    }
};
