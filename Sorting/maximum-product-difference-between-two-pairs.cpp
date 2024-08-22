class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        size_t len = nums.size();
        quickSort(nums, 0, len - 1);
        return nums[len - 1] * nums[len - 2] - nums[0] * nums[1];
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
