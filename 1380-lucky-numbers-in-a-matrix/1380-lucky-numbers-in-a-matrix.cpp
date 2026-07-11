class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
             int r=matrix.size();
        int c=matrix[0].size();
        vector<int>col(c);
        vector<int>row(r);
        vector<int>ans;
        for(int i=0;i<r;i++){
            int mi=INT_MAX;
            for(int j=0;j<c;j++){
                mi=min(mi,matrix[i][j]);
            }
            row[i]=mi;

        }
        for(int j=0;j<c;j++){
            int ma=INT_MIN;
            for(int i=0;i<r;i++){
                ma=max(ma,matrix[i][j]);
            }
            col[j]=ma;
        }
         for(int i=0;i<r;i++){
            int mi=INT_MAX;
            for(int j=0;j<c;j++){
               if(matrix[i][j]==row[i]&&matrix[i][j]==col[j])
               ans.push_back(matrix[i][j]);
            }
         }
            return ans;
    }
};