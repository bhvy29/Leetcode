class Solution {
public:

    int findmax(vector<vector<int>>& mat,int col,int n,int m){

        int index=-1;
        int maxva=-1;
        for(int i=0;i<m;i++){
           if(mat[i][col] > maxva){
            maxva = mat[i][col];
            index = i;
        }
        }
        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            int maxel=findmax(mat,mid,n,m);
            int left=mid-1>=0?mat[maxel][mid-1]:-1;
            int right=mid+1<n?mat[maxel][mid+1]:-1;

            if(mat[maxel][mid]>left && mat[maxel][mid]>right){
                return {maxel,mid};
            }
            else if(mat[maxel][mid]<left)high=mid-1;
            else low=mid+1;
        }
        return {-1,-1};
    }
};