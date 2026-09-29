class Solution {
public:
    int maxProduct(vector<int>& a) {
        int prefix=1,sufix=1;
        int ans,n=a.size();
        for(int i=0;i<n;i++){
            if(prefix==0)prefix=1;
            if(sufix==0)sufix=1;
            prefix=prefix*a[i];
            sufix=sufix*a[n-i-1];
            ans=max(ans,max(prefix,sufix));
        }
        return ans;
    }
};