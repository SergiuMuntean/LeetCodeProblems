class Solution {
public:
    int xorOperation(int n, int start) {
        int value = start;
        for(int i{0}; i < n - 1; i++) {
            start += 2;
            value ^= start;
        }
        return value;
    }
};
