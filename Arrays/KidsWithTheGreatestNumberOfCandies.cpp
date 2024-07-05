class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(candies.size(), true);
        int max = 0;
        for(int i = 0; i < candies.size(); i++) {
            if(candies.at(i) > max) {
                max = candies.at(i);
            }
        }
        for(int i = 0; i < candies.size(); i++) {
            candies.at(i) += extraCandies;
            if(candies.at(i) < max) {
                result.at(i) = false;
            }
        }
        return result;
    }
};
