class Solution {
public:
    bool buddyStrings(string s, string g) {
        int n = s.size();
        if (n != g.size()) return false;

        if (s == g) {
            unordered_set<char> uniqueChars(s.begin(), s.end());
            return uniqueChars.size() < n;
        }

        int swapCount = 0;
        int firstDiff = -1, secondDiff = -1;

        for (int i = 0; i < n; i++) {
            if (s[i] != g[i]) {
                swapCount++;
                if (firstDiff == -1) {
                    firstDiff = i;
                } else if (secondDiff == -1) {
                    secondDiff = i;
                } else {
                    return false;
                }
            }
        }

        return (swapCount == 2 && s[firstDiff] == g[secondDiff] && s[secondDiff] == g[firstDiff]);
    }
};
