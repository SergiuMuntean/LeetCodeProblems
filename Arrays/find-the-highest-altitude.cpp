class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> values;
        int sum{};
        values.push_back(sum);
        for(int i{0}; i < gain.size(); i++) {
            sum += gain.at(i);
            values.push_back(sum);
        }
        int max = -100;
        for(int i{0}; i < values.size(); i++) {
            if(values.at(i) > max) {
                max = values.at(i);
            }
        }
        return max;
    }
};
