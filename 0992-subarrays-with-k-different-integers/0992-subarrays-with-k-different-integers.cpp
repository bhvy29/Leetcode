class Solution {
public:
    int subk(vector<int>& a, int k) {
        int l=0,r=0,cnt=0;
        map<int,int>mpp;
        while(r<a.size()){
            mpp[a[r]]++;
            while(mpp.size()>k){
                mpp[a[l]]--;
                if(mpp[a[l]]==0){
                    mpp.erase(a[l]);
                }
                l++;
            }
            cnt=cnt+(r-l+1);
            r++;
        }
        
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& a, int k) {
        return subk(a,k)-subk(a,k-1);
    }
};
