class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int value = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums.at(i) % 3 != 0) {
                value++;
            }
        }
        return value;
    }
};
