class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double sum{0};
        int contor{0};
        vector<int> result;
        if(nums1.size() == 0 && nums2.size() == 0) {
            return (double) 0;
        }
        if(nums1.size() == 1 && nums2.size() == 0) {
            return (double) nums1.at(0);
        }
         if(nums1.size() == 0 && nums2.size() == 1) {
            return (double) nums2.at(0);
        }
        int finalSize = nums1.size() + nums2.size();
        int j{0}, k{0};
        for(int i{0}; i < finalSize; i++) {
            if(j < nums1.size() && (k >= nums2.size() || nums1.at(j) <= nums2.at(k))) {
                result.push_back(nums1.at(j));
                j++;
            } else if(k < nums2.size() && (j >= nums1.size() || nums1.at(j) > nums2.at(k))) {
                result.push_back(nums2.at(k));
                k++;
            }
        }
        if(finalSize % 2 == 1) {
            double sum{0};
            sum += (double)result.at(finalSize / 2);
            return sum;
        } else {
            double sum{0};
            sum += ((double)result.at(finalSize / 2 - 1) + (double)result.at(finalSize / 2));
            return sum / 2;
        }
    }
};
