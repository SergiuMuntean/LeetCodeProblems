class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        bool allNegative {true};
        int largest{INT_MIN};
        for(auto& el : nums) {
            if(el > 0) {
                allNegative = false;
                break;
            }
            largest = max(largest, el);
        }
        if(allNegative) {
            return largest;
        }
        int curr{0};
        int sum{nums.at(0)};
        for(int i{0}; i < nums.size(); i++) {
            if(curr < 0) {
                curr = 0;
            }
            curr += nums.at(i);
            if(curr > sum) {
                sum = curr;
            }
        }
        return sum;
    }
}; //this problem uses KADANE's Algorithm
