class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<float> averages;
        for(int i{0}; i < nums.size() - 1; i++) {
            for(int j{i + 1}; j < nums.size(); j++) {
                if(nums.at(i) > nums.at(j)) {
                    int aux = nums.at(i);
                    nums.at(i) = nums.at(j);
                    nums.at(j) = aux;
                }
            }
        }
        for(int i = 0, j = nums.size() - 1; i < nums.size(); i++, j--) {
            float average = static_cast<float>(nums.at(i) + nums.at(j)) / 2;
            averages.push_back(average);
        }
        for(int i{0}; i < averages.size() - 1; i++) {
            for(int j{i + 1}; j < averages.size(); j++) {
                if(averages.at(i) > averages.at(j)) {
                    int aux = averages.at(i);
                    averages.at(i) = averages.at(j);
                    averages.at(j) = aux;
                }
            }
        }
        return averages.at(0);
    }
};
