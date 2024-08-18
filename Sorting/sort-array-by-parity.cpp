class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        size_t i{0}, j{nums.size() - 1};
        while(i < j) {
            while(i < j && nums.at(i) % 2 == 0) i++;
            while(i < j && nums.at(j) % 2 == 1) j--;
            if(i < j) {
                swap(nums.at(i), nums.at(j));
            }
        }
        return nums;
    }
};
