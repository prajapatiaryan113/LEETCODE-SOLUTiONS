class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
    unordered_map<char, int> m;
    int start = 0, end = 0;
    string ans = "";
    while (end < s.size()) {
        m[s[end]]++;
        while (m['1'] >= k) {
            while (start < end && s[start] == '0') {
                m[s[start]]--;
                start++;
            }
            string curr = s.substr(start, end - start + 1);
            if (ans.empty() ||
                curr.size() < ans.size() ||
                (curr.size() == ans.size() && curr < ans)) {
                ans = curr;
            }
            m[s[start]]--;
            start++;
        }
        end++;
    }
    return ans;
    }
};