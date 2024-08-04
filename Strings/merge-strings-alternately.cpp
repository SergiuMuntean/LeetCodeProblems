class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1 = word1.length();
        int len2 = word2.length();
        int min, max;
        if(len1 < len2) {
            min = len1;
            max = len2;
        } else {
            min = len2;
            max = len1;
        }
        string result {};
        for(int i{0}; i < min; i++) {
            string val1 (1, word1.at(i));
            string val2 (1, word2.at(i));
            result.append(val1);
            result.append(val2);
        }
        if(word1.size() == max) {
            for(int i{min}; i < max; i++) {
                string val (1, word1.at(i));
                result.append(val);
            }
        } else {
             for(int i{min}; i < max; i++) {
                string val (1, word2.at(i));
                result.append(val);
            }
        }
        return result;
    }
};
