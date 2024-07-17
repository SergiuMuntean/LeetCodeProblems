class Solution {
public:
    int numberOfSteps(int num) {
        int count{};
        while(num > 0) {
            if(num % 2) {
                num--;
            } else {
                num /= 2;
            }
            count++;
        }
        return count;
    }
};
