class Solution {
public:
    void reverseString(vector<char>& s) {
              int left=0;
       int n=s.size()-1;
        int right=n;
     while(left<right)
      {
            char temp=s[left];
            s[left]=s[right];
            s[right]=temp;
     left++;
     right--;
      }  
    }
};