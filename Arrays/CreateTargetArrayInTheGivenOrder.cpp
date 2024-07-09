class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target(index.size(), 0);
        for(int i = 0; i < index.size(); i++) {
            for(int j = index.size() - 2; j >= index.at(i); j--) {
                target.at(j + 1) = target.at(j);
            }
            target.at(index.at(i)) = nums.at(i);
        }
        return target;
    }
};
