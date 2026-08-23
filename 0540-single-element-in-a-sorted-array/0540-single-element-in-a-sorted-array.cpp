class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int n=a.size();
        if(n==1)return a[0];
        else if(a[0]!=a[1])return a[0];
        else if(a[n-1]!=a[n-2])return a[n-1];
        int l=1,h=n-2,m;
        while(l<=h){
            m=(l+h)/2;
            if(a[m]!=a[m-1]&&a[m]!=a[m+1])return a[m];
            else if((m%2==1&&a[m]==a[m-1])||(m%2==0&&a[m]==a[m+1]))l=m+1;
            else h=m-1;

        }
        return -1;
            
        

    }
};