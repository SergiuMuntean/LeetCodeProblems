class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elSum{0};
        int digitSum{0};
        for(int i{0}; i < nums.size(); i++) {
            elSum += nums.at(i);
            digitSum += elDigitSum(nums.at(i));
        }
        return abs(elSum - digitSum);
    }

    int elDigitSum(int element) {
        int sum = 0;
        while(element) {
            sum += element % 10;
            element /= 10;
        }
        return sum;
    }
};
