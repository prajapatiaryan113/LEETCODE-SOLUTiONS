class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0;int high=matrix.size()*matrix[0].size()-1;
        int rindex;
        int cindex;
        int n=matrix[0].size();
        while(low<=high){
            int mid=(low+high)/2;
            rindex=mid/n;
            cindex=mid%n;
            if(matrix[rindex][cindex]==target)
            return true;

            else if(matrix[rindex][cindex]<target)
            low=mid+1;

            else
            high=mid-1;
        }
        return false;
    }
};