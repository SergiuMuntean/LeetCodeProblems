class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        for(int i{0}; i < nums.size() - 1; i++) {
            for(int j{i + 1}; j < nums.size(); j++) {
                if(abs(nums.at(i) - nums.at(j)) == k) {
                    count++;
                }
            }
        }
        return count;
    }
};
