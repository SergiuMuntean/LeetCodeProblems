class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result (2 * nums.size(), 0);
        for(int i = 0; i < nums.size(); i++) {
            result.at(i) = nums.at(i);
            result.at(i + nums.size()) = nums.at(i);
        }
        return result;
    }
};
