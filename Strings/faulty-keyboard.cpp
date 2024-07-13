class Solution {
public:
    string finalString(string s) {
        string res{};
        for(int i{0}; i < s.length(); i++) {
            if(s.at(i) == 'i' && i >= 1) {
                int len = res.length();
                for(int j{0}; j < len / 2; j++) {
                    swap(res.at(j),res.at(len - j - 1));
                }
            } else{
                res.push_back(s.at(i));
            }
        }
        return res;
    }
};
