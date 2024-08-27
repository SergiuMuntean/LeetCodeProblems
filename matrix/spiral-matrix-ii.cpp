class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int startRow = 0;
        int endRow = n - 1;
        int endColumn = n - 1;
        int startColumn = 0;
        vector<vector<int>> matrix (n, vector<int> (n, 0));
        int value = 1;
        while(startRow <= endRow && startColumn <= endColumn) {
            for(int i{startColumn}; i <= endColumn; i++) {
                matrix[startRow][i] = value++;
            }
            for(int i{startRow + 1}; i <= endRow; i++) {
                matrix[i][endColumn] = value++;
            }
            for(int i{endColumn - 1}; i >= startColumn; i--) {
                if(endRow == startRow) {
                    break;
                }
                matrix[endRow][i] = value++;
            }
            for(int i{endRow - 1}; i >= startRow + 1; i--) {
                if(endColumn == startColumn) {
                    break;
                }
                matrix[i][startColumn] = value++;
            }
            startRow++;
            endRow--;
            startColumn++;
            endColumn--;
        }
        return matrix;
    }
};
