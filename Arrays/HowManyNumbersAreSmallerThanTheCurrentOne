class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> results(nums.size(), 0);
        for(int i = 0; i < nums.size(); i++) {
            for(int j = 0; j < nums.size(); j++) {
                if(i != j) {
                    if(nums.at(j) < nums.at(i)) {
                        results.at(i)++;
                    }
                }
            }
        }
        return results;
    }
};
