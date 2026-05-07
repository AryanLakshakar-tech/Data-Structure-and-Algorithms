class Solution {
public:
    bool detectCapitalUse(string word) {
        int caps = 0;

        for (char c : word) {
            if (isupper(c)) caps++;
        }

        return (caps == word.size() || caps == 0 || 
               (caps == 1 && isupper(word[0])));
    }
};
