class NumArray {
private:
    vector<int> values;
public:
    NumArray(vector<int>& nums) {
        int sum{0};
        for(int i{0}; i < nums.size(); i++) {
            sum += nums.at(i);
            values.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        int dif{values[right]};
        if(left > 0) {
            dif = values[right] - values[left - 1];
        }
        return dif;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
