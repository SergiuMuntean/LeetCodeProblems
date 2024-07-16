class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> aux(image.size(), vector<int>(image.size(), 0));
        vector<vector<int>> result(image.size(), vector<int>(image.size(), 0));

        int len = image.size();
        for(int i{0}; i < len; i++) {
            for(int j{0}; j < len; j++) {
                aux.at(i).at(j) = image.at(i).at(len - 1 - j);
            }
        }

        for(int i{0}; i < len; i++) {
            for(int j{0}; j < len; j++) {
                if(aux.at(i).at(j) == 0) {
                    result.at(i).at(j) = 1;
                }
            }
        }
        return result;
    }
};
