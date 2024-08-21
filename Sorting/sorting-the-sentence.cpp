class Solution {
public:
    string sortSentence(string s) {
       vector<string> words(9);
       int actualSize{0};
       int start{0};
       int len{0};
       for(int i{0}; i < s.size(); i++) {
            if(s.at(i) >= '0' && s.at(i) <= '9') {
                len = i - start + 1;
                int pos = s.at(i) - '1';
                words.at(pos) = s.substr(start, len - 1);
                start = i + 2;
            }
       }
       string result;
       for(int i{0}; i < words.size(); i++) {
            result += words.at(i) + " ";
       }
        size_t index{result.size() - 1};
        size_t value{index};
       for(size_t i{value}; i >= 0; i--) {
            if(result.at(i) != ' ') {
                index = i + 1;
                break;
            }
       }
       size_t length = value - index;
       result.erase(index, length);
       result.erase(result.begin() + result.size() - 1);
       return result;
    }
};
