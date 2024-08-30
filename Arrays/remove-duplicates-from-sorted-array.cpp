class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 1) {
            return 1;
        }
        vector<int> result;
        int contor{0};
        result.push_back(nums.at(0));
        contor++;
        for(int i{1}; i < nums.size(); i++) {
            if(nums.at(i) != nums.at(i - 1)) {
                result.push_back(nums.at(i));
                contor++;
            }
        }
        for(int i{0}; i < result.size(); i++) {
            nums.at(i) = result.at(i);
        }
        return contor;
    }
};
