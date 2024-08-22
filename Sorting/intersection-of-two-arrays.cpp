class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        quickSort(nums1, 0, nums1.size() - 1);
        quickSort(nums2, 0, nums2.size() - 1);
        int mini = min(nums1.size(), nums2.size());
        int maxi = max(nums1.size(), nums2.size());
        int previous{-1};
        for(int i{0}; i < nums1.size(); i++) {
            for(int j{0}; j < nums2.size(); j++) {
                if(nums1.at(i) == nums2.at(j)) {
                    int val = nums1.at(i);
                    if(val != previous) {
                        result.push_back(val);
                    }
                    previous = val;
                }
            }
        }
        return result;
    }
    int partition(vector<int>& nums, int l, int h) {
        int pivot = nums.at(l);
        int i{l}, j{h};
        while(i < j) {
            while(i <= h && nums.at(i) <= pivot) i++;
            while(j >= l && nums.at(j) > pivot) j--;
            if(i < j) {
                swap(nums.at(i), nums.at(j));
            }
        }
        swap(nums.at(l), nums.at(j));
        return j;
    }
    void quickSort(vector<int>& nums, int l, int h) {
        if(l < h) {
            int j = partition(nums, l, h);
            quickSort(nums, l, j - 1);
            quickSort(nums, j + 1, h);
        }
    }
};
