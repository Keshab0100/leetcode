class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastSeen;
        int maxLen = 0;
        int l = 0;

        for (int r = 0; r < s.length(); r++) {

            if (lastSeen.find(s[r]) != lastSeen.end()
                && lastSeen[s[r]] >= l) {
                l = lastSeen[s[r]] + 1;
            }

            lastSeen[s[r]] = r;
            maxLen = max(maxLen, r - l + 1);
        }

        return maxLen;
    }
};
