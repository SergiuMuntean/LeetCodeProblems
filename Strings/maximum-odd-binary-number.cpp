class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string result{};
        int count{};
        for(size_t i{0}; i < s.length(); i++) {
            if(s.at(i) == '1') {
                count++;
            }
        }
        for(size_t i{0}; i < count - 1; i++) {
            result.push_back('1');
        }
        int len = s.length();
        for(size_t i{0}; i < len - count; i++) {
            result.push_back('0');
        }
        result.push_back('1');
        return result;
    }
};
