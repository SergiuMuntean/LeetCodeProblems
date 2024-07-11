class Solution {
public:
    int scoreOfString(string s) {
        int sum{0};
        for(auto i{1}; i < s.length(); i++) {
            sum += static_cast<int>(abs(s[i] - s[i - 1]));
        }
        return sum;
    }
};
