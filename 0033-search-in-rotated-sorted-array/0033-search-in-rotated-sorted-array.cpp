class Solution {
public:
    int search(vector<int>& a, int t) {
        int n=a.size();
        int l=0,h=n-1,m;
        while(l<=h){
            m=(l+h)/2;
            if(a[m]==t)return m;
            if(a[l]<=a[m]){
                if(a[l]<=t&&t<=a[m]){
                    h=m-1;
                }
                else l=m+1;
            }
            else{
                if(a[h]>=t&&t>=a[m]){
                    l=m+1;
                }
                else h=m-1;
            }
        }
        return -1;
    }
};