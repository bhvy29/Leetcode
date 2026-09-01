class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int m=mat.size(),n=mat[0].size();
        int l=0,h=n*m-1;
        while(l<=h){
            int mid=(l+h)/2;
            int row=mid/n,col=mid%n;
            if(mat[row][col]==t)return true;
            else if(mat[row][col]<t)l=mid+1;
            else h=mid-1;
        }
        return false;
    }
};