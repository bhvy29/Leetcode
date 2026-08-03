class Solution {
public:
    int totalFruit(vector<int>& a) {
       int l=0,r=0,maxl=0,n=a.size();
       map<int,int> mpp;

        while(r<n){
            mpp[a[r]]++;
            if(mpp.size()>2){
                mpp[a[l]]--;
                if(mpp[a[l]]==0){
                    mpp.erase(a[l]);
                }
                l++;
            }
            if(mpp.size()<=2){
                maxl=max(maxl,r-l+1);
            }
        r++;    
        }
        return maxl;
    }
};