class Solution {
public:
    int trap(vector<int>& a) {
        int l=0,r=a.size()-1,lmax=0,rmax=0,total=0;
        for(int i=0;i<a.size();i++){
            if(a[l]<=a[r]){
                if(a[l]<lmax)total+=lmax-a[l];
                else lmax=a[l];
                l++;
            }
            else{
                if(a[r]<rmax)total+=rmax-a[r];
                else rmax=a[r];
                r--;
            }
        }
        return total;
    }
};