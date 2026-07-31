class Solution {
public:
    
    string reverseWords(string s) {
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '||i==s.size()-1)
          {  
             int end = (s[i] == ' ') ? i - 1 : i;
            reverse(s.begin()+j,s.begin()+end+1);
            j=i+1;
          }
        }
        return s;
    }
};