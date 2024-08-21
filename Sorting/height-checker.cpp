class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sorted;
        for(int i{0}; i < heights.size(); i++) {
            sorted.push_back(heights.at(i));
        }
        quickSort(sorted, 0, heights.size() - 1);
        int count{0};
        for(int i{0}; i < heights.size(); i++) {
            if(heights.at(i) != sorted.at(i)) {
                count++;
            }
        }
        return count;
    }
    int partition(vector<int>& heights, int l, int h) {
        int i{l}, j{h};
        int pivot = heights.at(l);
        while(i < j) {
            while(i <= h && heights.at(i) <= pivot) i++;
            while(j >= l && heights.at(j) > pivot) j--;
            if(i < j) {
                swap(heights.at(i), heights.at(j));
            }
        }
        swap(heights.at(l), heights.at(j));
        return j;
    }
    void quickSort(vector<int>& heights, int l, int h) {
        if(l < h) {
            int j = partition(heights, l, h);
            quickSort(heights, l, j - 1);
            quickSort(heights, j + 1, h);
        }
    }
};
