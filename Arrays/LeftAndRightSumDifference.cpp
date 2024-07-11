class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftSum{}, rightSum{};
        int lSum{0}, rSum{0};
        leftSum.push_back(lSum);
        for(int i{0}; i < nums.size() - 1; i++) {
            lSum += nums.at(i);
            leftSum.push_back(lSum);
        }

        const int len = nums.size() - 1;
        rightSum.insert(rightSum.begin(), rSum);
        for(int j{len}; j >= 1; j--) {
            rSum += nums.at(j);
            rightSum.insert(rightSum.begin(), rSum);
        }
        vector<int> answer;
        for(int i = 0; i < nums.size(); i++) {
            if(leftSum.at(i) > rightSum.at(i)) {
                answer.push_back(leftSum.at(i) - rightSum.at(i));
            }
            else {
                answer.push_back(rightSum.at(i) - leftSum.at(i));
            }
        }
        return answer;
    }
};
