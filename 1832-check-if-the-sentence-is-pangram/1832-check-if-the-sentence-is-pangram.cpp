class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>f(26,0);
        for(char c:sentence){
            f[c-'a']++;
        }
        for(int i:f)
        if(i==0) return false;

        return true;
    }
};