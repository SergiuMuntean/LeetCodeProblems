class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size();
        for(int i{0}; i < len / 2; i++) {
            char aux = s.at(i);
            s.at(i) = s.at(len - i - 1);
            s.at(len - i - 1) = aux;
        }
    }
};
