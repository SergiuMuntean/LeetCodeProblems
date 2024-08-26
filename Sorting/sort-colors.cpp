class Solution {
public:
    void sortColors(vector<int>& nums) {
        int largest{0};
        for(int i{0}; i < nums.size(); i++) {
            largest = max(largest, nums.at(i));
        }
        vector<int> frequency(largest + 1, 0);
        for(int i{0}; i < nums.size(); i++) {
            frequency[nums.at(i)]++;
        }
        int j{0};
        for(int i{0}; i <= largest; i++) {
            while(frequency[i] > 0) {
                frequency[i]--;
                nums.at(j++) = i;
            }
        }
    }
};
