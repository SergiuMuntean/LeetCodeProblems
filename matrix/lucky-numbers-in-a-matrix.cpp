class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> minimums;
        int mini{100000};
        for(int i{0}; i < matrix.size(); i++) {
            mini = 100000;
            for(int j{0}; j < matrix.at(0).size(); j++) {
                mini = min(matrix[i][j], mini);
            }
            minimums.push_back(mini);
        }
        vector<int> maximums;
        int maxi{0};
        for(int j{0}; j < matrix.at(0).size(); j++) {
            maxi = 0;
            for(int i{0}; i < matrix.size(); i++) {
                maxi = max(matrix[i][j], maxi);
            }
            maximums.push_back(maxi);
        }
        vector<int> result;
        for(int i{0}; i < maximums.size(); i++) {
            for(int j{0}; j < minimums.size(); j++) {
                if(maximums.at(i) == minimums.at(j)) {
                    result.push_back(maximums.at(i));
                    return result;
                }
            }
        }
        return result;
    }
};
