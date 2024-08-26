class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int largest{0};
        for(auto& el: arr1) {
            largest = max(el, largest);
        }
        vector<int> freq(largest + 1, 0);
        for(int i{0}; i < arr1.size(); i++) {
            freq[arr1[i]]++;
        }
        int j{0};
        for(int i{0}; i < arr2.size(); i++) {
            while(freq[arr2[i]] > 0) {
                arr1[j++] = arr2[i];
                freq[arr2[i]]--;
            }
        }
        for(int i{0}; i < freq.size(); i++) {
            while(freq[i] > 0) {
                arr1[j++] = i;
                freq[i]--;
            }
        }
        return arr1;
    }
};
