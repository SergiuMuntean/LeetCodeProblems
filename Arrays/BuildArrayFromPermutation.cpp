class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> result (nums.size(), 0);
        for(int i = 0; i < nums.size(); i++) {
            result.at(i) = nums.at(nums.at(i));
        }
        return result;
    }
};
