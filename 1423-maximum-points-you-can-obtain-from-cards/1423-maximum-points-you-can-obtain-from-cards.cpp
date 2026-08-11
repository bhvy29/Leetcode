class Solution {
public:
    int maxScore(vector<int>& a, int k) {
        int lsum=0,rsum=0,maxsum=0;

        for(int i=0;i<k;i++){
            lsum=lsum+a[i];
        }
        maxsum=lsum;
        int r=a.size()-1;
        for(int i=k-1;i>=0;i--){
            lsum=lsum-a[i];
            rsum=rsum+a[r];
            maxsum=max(maxsum,rsum+lsum);
            r--;
        }
        return maxsum;
    }
};