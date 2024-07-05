class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> values(words.size(), 0);
        for(int i = 0; i < words.size(); i++) {
            for(int j = 0; j < words.at(i).size(); j++) {
                if(words.at(i).at(j) == x) {
                    values.at(i) = 1;
                    break;
                }
            }
        }
        vector<int> found;
        for(int i = 0; i < words.size(); i++) {
            if(values.at(i) == 1) {
                found.push_back(i);
            }
        }
        return found;
    }
};
