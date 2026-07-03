class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>v(256,0);
        int i=0,j=0;
        int len=0;
        while(j<s.size()){
            while(v[s[j]]){
                v[s[i]]=0;
                i++;
            }
            v[s[j]]=1;
            len=max(len,j-i+1);
            j++;
        }
        return len;
    }
};