class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr {};
        int min1 {100};
        int min2 {100};
        int index1{}, index2{};
        int contor = nums.size();
        while(contor > 0) {
            min1 = 100, min2 = 100, index1 = 0, index2 = 0;
            for(int i {0}; i < nums.size(); i++) {
                if(nums.at(i) < min1) {
                    min2 = min1;
                    min1 = nums.at(i);
                    index2 = index1;
                    index1 = i;
                } else if(nums.at(i) < min2) {
                    min2 = nums.at(i);
                    index2 = i;
                }
            }
            if(index1 > index2) {
                nums.erase(nums.begin() + index1);
                nums.erase(nums.begin() + index2);
            }
            else {
                nums.erase(nums.begin() + index2);
                nums.erase(nums.begin() + index1);
            }
            arr.push_back(min2);
            arr.push_back(min1);
            contor -= 2;
        }
        return arr;
    }
};
