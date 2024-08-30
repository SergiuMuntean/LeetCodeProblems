class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int contor{0};
        for(int i{0}; i < nums.size(); i++) {
            if(nums.at(i) == val) {
                nums.erase(nums.begin() + i);
                i--;
            } else {
                contor++;
            }
        }
        return contor;
    }
};
