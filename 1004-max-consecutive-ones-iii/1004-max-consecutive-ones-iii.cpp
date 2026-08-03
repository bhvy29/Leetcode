class Solution {
public:
    int longestOnes(vector<int>& a, int k) {
        int l=0,r=0,maxl=0,zero=0;

        while(r<a.size()){
            if(a[r]==0)zero++;
            if(zero>k){
                if(a[l]==0){
                    zero--;
                }
                l++;
            }
            if(zero<=k){
                maxl=max(maxl,r-l+1);
            }
            r++;
        }
        return maxl;
    }
};