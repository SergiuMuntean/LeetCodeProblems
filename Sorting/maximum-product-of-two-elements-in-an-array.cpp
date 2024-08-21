class Solution {
public:
    int maxProduct(vector<int>& nums) {
        quickSort(nums, 0, nums.size() - 1);
        int a = nums.at(0) - 1;
        int b = nums.at(1) - 1;
        return a * b;
    }
    int partition(vector<int>& nums, int l, int h) {
        int i{l}, j{h};
        int pivot = nums[l];
        while(i < j) {
            while(i <= h && nums.at(i) >= pivot) i++;
            while(j >= l && nums.at(j) < pivot) j--;
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
