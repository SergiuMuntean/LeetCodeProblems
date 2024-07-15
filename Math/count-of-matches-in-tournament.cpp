class Solution {
public:
    int numberOfMatches(int n) {
        int matches{0};
        while(n >= 2) {
            if(n % 2 == 0) {
                n /= 2;
                matches += n;
            } else {
                n = n / 2 + 1;
                matches += n - 1;
            }
        }
        return matches;
    }
};
