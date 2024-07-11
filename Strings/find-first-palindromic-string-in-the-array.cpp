class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i < words.size(); i++) {
            int len = words.at(i).size();
            bool isPalindrome = true;
            for(int j = 0; j < len / 2; j++) {
                if(words.at(i).at(j) != words.at(i).at(len - j - 1)) {
                    isPalindrome = false;
                    break;
                }
            }
            if(isPalindrome) {
                return words.at(i);
            }
        }
        return "";
    }
};
