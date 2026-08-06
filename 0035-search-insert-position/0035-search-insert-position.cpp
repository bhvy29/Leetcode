class Solution {
public:
    int searchInsert(vector<int>& a, int t) {
        int n=a.size();
        int l=0,r=n-1;
        int m;
        while(l<=r){
            m=(l+r)/2;
            if(a[m]==t){
                return m;
            }
            else if(a[m]>t){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        if(l==r)return r;
        return r+1;
    }
};