class Solution {
public:
bool checkPal(string &s, int low, int high) {
    while (low < high) {
        if (s[low] != s[high])
            return false;
        low++;
        high--;
    }
    return true;
}
    string longestPalindrome(string s) {
        
        int n = s.size();

    // all substrings of length 1 are palindromes
    int maxLen = 1, start = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
        
            if (checkPal(s, i, j) && (j - i + 1) > maxLen) {
                start = i;
                maxLen = j - i + 1;
            }
        }
    }
    return s.substr(start, maxLen);
    }
};