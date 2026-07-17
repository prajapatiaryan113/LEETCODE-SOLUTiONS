class Solution {
public:
    int ispalindrome(string s){
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            if(s[i]==s[j]){
                i++,j--;
            }
            else 
            return 0;
        }
        return 1;
    }
    int countSubstrings(string s) {
        int n = s.length();
        vector<string>ans;
        for(int i=0;i<s.size();i++){
             for(int j=1;j<=n-i;j++){
                string sub=s.substr(i,j);
                ans.push_back(sub);
             }
        }
        int count=0;
        for(int i=0;i<ans.size();i++){
                if(ispalindrome(ans[i]))
                count++;
             }
             return count;
    }
};