class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        quickSort(points, 0, points.size() - 1);
        int max{0};
        for(int i{1}; i < points.size(); i++) {
            if((abs(points.at(i).at(0) - points.at(i - 1).at(0))) > max) {
                max = abs(points.at(i).at(0) - points.at(i - 1).at(0));
            }
        }
        return max;
    }
    int partition(vector<vector<int>>& points, int l, int h) {
        int pivot = points[l][0];
        int i{l}, j{h};
        while(i < j) {
            while(i <= h && points.at(i).at(0) <= pivot) i++;
            while(j >= l &&  points.at(j).at(0) > pivot) j--;
            if(i < j) {
                swap(points.at(i), points.at(j));
            }
        }
        swap(points.at(l), points.at(j));
        return j;
    }
    void quickSort(vector<vector<int>>& points, int l, int h) {
        if(l < h) {
            int j = partition(points, l, h);
            quickSort(points, l, j - 1);
            quickSort(points, j + 1, h);
        }
    }
};
