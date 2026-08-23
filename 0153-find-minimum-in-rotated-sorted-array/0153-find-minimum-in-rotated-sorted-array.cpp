class Solution {
public:
    int findMin(vector<int>& a) {
        int l=0,h=a.size()-1,ans=INT_MAX;
        while(l<=h){
            int m=(l+h)/2;
            
            if(a[l]<=a[m]){
                ans=min(ans,a[l]);
                l=m+1;
            }
            else {
                ans=min(ans,a[m]);
                h=m-1;
            }
        }
        return ans;
    }
};