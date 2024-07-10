class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int index{-1};
        int count{0};
        int detect{0};
        do{
            detect = 0;
            for(int i{0}; i < nums.size(); i++) {
                if(nums.at(i) < k) {
                    nums.erase(nums.begin() + i);
                    count++;
                    detect = 1;
                    break;
                }
            }
        } while(detect);
        return count;
    }
};
