class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> result;
        for(int i{0}; i < queries.size(); i++) {
            int count = 0;
            for(int j{0}; j < points.size(); j++) {
                int dx = points.at(j).at(0) - queries.at(i).at(0);
                int dy = points.at(j).at(1) - queries.at(i).at(1);
                int center = queries.at(i).at(2);
                if(dx * dx + dy * dy <= center * center) {
                    count++;
                }
            }
            result.push_back(count);
        }
        return result;
    }
};
