class Solution {
public:
    string removeStars(string s) {
        string result;

        for (char c : s) {
            if (c == '*') {
                result.pop_back();  // remove last character
            } else {
                result.push_back(c); // add character
            }
        }

        return result;
    }
};
