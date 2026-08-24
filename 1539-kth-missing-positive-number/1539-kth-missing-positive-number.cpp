class Solution {
public:
    int findKthPositive(vector<int>& a, int k) {
        int l=0,h=a.size()-1;
        while(l<=h){
            int m=l+(h-l)/2;
            int miss=a[m]-(m+1);
            if(miss<k)l=m+1;
            else h=m-1;
        }
        return l+k;
    }
};