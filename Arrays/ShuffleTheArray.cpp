class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> shuffled(nums.size(), 0);
        int len = nums.size() / 2;
        int j = 0;
        for(int i = 0; i < len; i++) {
            shuffled.at(j++) = nums.at(i);
            shuffled.at(j++) = nums.at(i + len);
        }
        return shuffled;
    }
};
