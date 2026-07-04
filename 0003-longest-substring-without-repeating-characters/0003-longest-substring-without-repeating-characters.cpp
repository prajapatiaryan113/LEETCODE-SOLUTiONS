class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         unordered_map<char,int>v;
        int i=0,j=0;
        int len=0;
        while(j<s.size()){
            v[s[j]]++;
            while(v[s[j]]>1){
                v[s[i]]--;
                i++;
            }
            len=max(len,j-i+1);
            j++;
        }
        return len;
    }
};