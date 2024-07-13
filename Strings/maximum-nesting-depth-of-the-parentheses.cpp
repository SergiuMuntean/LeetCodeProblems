class Solution {
public:
    int maxDepth(string s) {
        int count{};
        int max{};
        for(auto c: s) {
            if(c == '(') {
                count++;
            }
            if(c == ')') {
                count--;
            }
            if(count > max) {
                max = count;
            }
        }
        return max;
    }
};
