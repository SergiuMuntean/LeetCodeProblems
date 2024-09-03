class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        if(nums.size() <= 2) {
            return true;
        }
        int globalInversions{0};
        int maxi{-1};
        for(int i{0}; i < nums.size() - 2; i++) {
            maxi = max(nums.at(i), maxi);
            if(maxi > nums.at(i + 2)) {
                return false;
            }
        }
        return true;
    }
};
