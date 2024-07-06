class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        vector<int> values(nums.size(), 0);
        for(int i = 0; i < nums.size(); i++) {
            int val = i;
            while(val) {
                if(val % 2 == 1) {
                    values.at(i)++;
                }
                val /= 2;
            }
        }
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(values.at(i) == k) {
                sum += nums.at(i);
            }
        }
        return sum;
    }
};
