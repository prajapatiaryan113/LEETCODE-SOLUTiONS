class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
        for(string c:patterns){
            if(word.find(c)!= std::string::npos)
            count++;
        }
        return count;
    }
};