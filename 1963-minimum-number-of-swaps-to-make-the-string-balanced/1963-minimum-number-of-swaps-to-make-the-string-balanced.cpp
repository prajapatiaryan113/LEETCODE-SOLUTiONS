class Solution {
public:
    int minSwaps(string s) {
        int unmatch=0;
        int count=0;
        for(char c:s){
            if(c=='[')
            unmatch++;
            else if(unmatch>0)
            unmatch--;
        }
        return (unmatch+1)/2;
    }
};