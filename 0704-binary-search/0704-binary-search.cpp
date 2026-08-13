class Solution {
public:
    int search(vector<int>& a, int target) {
        int l=0,h=a.size()-1,m=0;
        while(l<=h){
            m=(l+h)/2;
            if(a[m]==target){
                return m;
            }
            else if(a[m]>target){
                h=m-1;
            }
            else l=m+1;
        }
        return -1;
    }
};