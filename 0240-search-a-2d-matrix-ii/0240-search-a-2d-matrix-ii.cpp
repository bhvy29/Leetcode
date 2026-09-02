class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int n=mat.size(),m=mat[0].size();
        int col=m-1,row=0;
        while(row<n&&col>=0){
            if(mat[row][col]==t)return true;
            else if(mat[row][col]<t)row++;
            else col--;
        }
        return false;
    }
};