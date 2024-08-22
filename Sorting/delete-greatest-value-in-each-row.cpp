class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(int k{0}; k < grid.size(); k++) {
            quickSort(grid[k], 0, grid.at(k).size() - 1);
        }
        int len = grid.at(0).size();
        int max{0};
        int sum{0};
        for(int j{0}; j < len; j++) {
            max = 0;
            for(int i{0}; i < grid.size(); i++) {
                if(grid.at(i).at(j) > max) {
                    max = grid.at(i).at(j);
                }
            }
            sum += max;
        }
        return sum;
    }
    int partition(vector<int>& grid, int l, int h) {
        int pivot = grid.at(l);
        int i{l}, j{h};
        while(i < j) {
            while(i <= h && grid.at(i) >= pivot) i++;
            while(j >= l && grid.at(j) < pivot) j--;
            if(i < j) {
                swap(grid.at(i), grid.at(j));
            }
        }
        swap(grid.at(l), grid.at(j));
        return j;
    }
    void quickSort(vector<int>& grid, int l, int h) {
        if(l < h) {
            int j = partition(grid, l, h);
            quickSort(grid, l, j - 1);
            quickSort(grid, j + 1, h);
        }
    }
};
