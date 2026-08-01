class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;

        for (string word : words) {
            if (word.size() > s.size())
                continue;
            bool isPrefix = true;

            for (int i = 0; i < word.size(); i++) {
             if (word[i] != s[i]) {
                    isPrefix = false;
                    break;
           }
            }

      if (isPrefix)
                count++;
        }

        return count;
    }
};