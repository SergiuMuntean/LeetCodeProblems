class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for(int i{0}; i < grid.size(); i++) {
            for(int j{0}; j < grid.at(i).size(); j++) {
                if(grid.at(i).at(j) < 0) {
                    count++;
                }
            }
        }
        return count;
    }
};
