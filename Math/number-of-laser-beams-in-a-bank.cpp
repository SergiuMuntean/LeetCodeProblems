class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> pairs;
        int count{};
        for(auto vect : bank) {
            count = 0;
            for(char c : vect) {
                if(c == '1') {
                    count++;
                }
            }
            if(count > 0) {
                pairs.push_back(count);
            }
        }
        int output{};
        if(pairs.size() <= 1) {
            return 0;
        }
        for(int i{0}; i < pairs.size() - 1; i++) {
            output += pairs.at(i) * pairs.at(i + 1);
        }
        return output;
    }
};
