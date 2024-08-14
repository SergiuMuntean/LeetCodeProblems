class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> arr;
        int curr{pref.at(0)};
        arr.push_back(curr);
        for(int i{1}; i < pref.size(); i++) {
            curr = pref.at(i) ^ pref.at(i - 1);
            arr.push_back(curr);
        }
        return arr;
    }
};
