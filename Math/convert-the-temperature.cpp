class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> values;
        values.push_back(celsius + 273.15);
        values.push_back(celsius * 1.8 + 32);
        return values;
    }
};
