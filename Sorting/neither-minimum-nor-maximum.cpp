class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size() <= 2) {
            return -1;
        }
        quickSort(nums, 0, nums.size() - 1);
        return nums.at(1);
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
