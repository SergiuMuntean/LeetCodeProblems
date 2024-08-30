class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        digits.at(len - 1)++;
        int i = len - 1;
        if(digits.at(len - 1) == 10) {
            while(digits.at(i) == 10 && i > 0) {
                digits.at(i) = 0;
                digits.at(i - 1)++;
                i--;
            }
        }

        if(digits.at(0) == 10) {
            digits.at(0) = 0;
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
