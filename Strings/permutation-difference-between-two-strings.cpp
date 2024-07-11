class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int sum = 0;
        for(int i{0}; i < s.size() - 1; i++) {
            for(int j{i + 1}; j < t.size(); j++) {
                if(s[i] == t[j]) {
                    sum += (j - i);
                    break;
                }
            }
        }
        return 2 * sum;
    }
};
