class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        size_t end = heights.size() - 1;
        quickSort(names, heights, 0, end);
        return names;
    }

    int partition(vector<string> &names, vector<int>& heights, int l, int h) {
        int i{l}, j{h};
        int pivot = heights.at(l);
        while(i < j) {
            while(i <= h && heights.at(i) >= pivot) {
                i++;
            } 
            while(j > l && heights.at(j) <= pivot) {
                j--;
            }   
            if(i < j) {
                swap(names.at(i), names.at(j));
                swap(heights.at(i), heights.at(j));
            }
        }
        swap(names.at(l), names.at(j));
        swap(heights.at(l), heights.at(j));
        return j;
    }

    void quickSort(vector<string>& names, vector<int>& heights, int l, int h) {
        if(l < h) {
            int j = partition(names, heights, l, h);
            quickSort(names, heights, l, j);
            quickSort(names, heights, j + 1, h);
        }
    }
};
