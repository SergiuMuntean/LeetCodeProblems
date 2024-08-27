class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       vector<int> result;
       int startRow = 0;
       int startColumn = 0;
       int endRow = matrix.size() - 1;
       int endColumn = matrix.at(0).size() - 1;
       while(startRow <= endRow && startColumn <= endColumn) {
            for(int i{startColumn}; i <= endColumn; i++) {
                result.push_back(matrix[startRow][i]);
            }
            for(int i{startRow + 1}; i <= endRow; i++) {
                result.push_back(matrix[i][endColumn]);
            }
            for(int i{endColumn - 1}; i >= startColumn; i--) {
                if(startRow == endRow) {
                    break;
                }
                result.push_back(matrix[endRow][i]);
            }
            for(int i{endRow - 1}; i >= startRow + 1; i--) {
                if(startColumn == endColumn) {
                    break;
                }
                result.push_back(matrix[i][startColumn]);
            }
            startColumn++;
            endColumn--;
            startRow++;
            endRow--;
       }
       return result; 
    }
};
