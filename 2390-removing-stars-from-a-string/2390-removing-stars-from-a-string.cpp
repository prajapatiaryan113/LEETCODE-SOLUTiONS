class Solution {
public:
    string removeStars(string s) {
        string ans="";
        for(char i:s){
            if(i!='*')
            ans.push_back(i);
            else if(!ans.empty())
            ans.pop_back();
        }
        return ans;
    }
};