class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> cells;
        char start = s[0], stop = s[3];
        char index1 = s[1], index2 = s[4];
        for(char i{start}; i <= stop; i++) {
            for(char j{index1}; j <= index2; j++) {
                string result;
                result.push_back(i);
                result.push_back(j);
                cells.push_back(result);
            }
        }
        return cells;
    }
};
