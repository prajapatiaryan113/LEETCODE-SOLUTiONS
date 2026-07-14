class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0;int high=matrix.size()*matrix[0].size()-1;
        int m=matrix.size()*matrix[0].size();

        int rindex;
        int cindex;
        while(low<=high){
            int mid=(low+high)/2;
            rindex=mid/matrix[0].size();
            cindex=mid%matrix[0].size();
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