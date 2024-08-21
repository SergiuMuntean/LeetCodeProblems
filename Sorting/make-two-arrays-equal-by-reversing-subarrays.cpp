class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        quickSort(target, 0, target.size() - 1);
        quickSort(arr, 0, arr.size() - 1);
        for(int i{0}; i < arr.size(); i++) {
            if(target[i] != arr[i]) {
                return false;
            }
        }
        return true;
    }
    int partition(vector<int>& arr, int l, int h) {
        int pivot = arr[l];
        int i{l}, j{h};
        while(i < j) {
            while(i <= h && arr[i] <= pivot) i++;
            while(j >= l && arr[j] > pivot) j--;
            if(i < j) {
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[l], arr[j]);
        return j;
    }
    void quickSort(vector<int>& arr, int l, int h) {
        if(l < h) {
            int j = partition(arr, l, h);
            quickSort(arr, l, j - 1);
            quickSort(arr, j + 1, h);
        }
    }
};
