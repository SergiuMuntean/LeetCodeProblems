class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> arr(encoded.size() + 1, 0);
        arr.at(0) = first;
        for(int i = 0; i < encoded.size(); i++) {
            arr.at(i + 1) = encoded.at(i) ^ arr[i];
        }
        return arr;
    }
};
