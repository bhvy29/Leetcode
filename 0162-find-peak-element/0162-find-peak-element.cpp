class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int n=a.size();
        if(n==1)return 0;
        else if(a[0]>a[1])return 0;
        else if(a[n-1]>a[n-2])return n-1;
        int l=1,h=n-2,m;
        while(l<=h){
            m=(l+h)/2;
            if(a[m]>a[m+1]&&a[m]>a[m-1])return m;
            else if(a[m-1]<a[m])l=m+1;
            else h=m-1;
        }   
        return -1;
    }
};