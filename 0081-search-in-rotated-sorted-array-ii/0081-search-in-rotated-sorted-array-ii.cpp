class Solution {
public:
    bool search(vector<int>& a, int t) {
        int l=0,h=a.size()-1;
        while(l<=h){
            int m=(l+h)/2;

            if(a[m]==t)return true;
            else if(a[l] == a[m] && a[m] == a[h]){
                l++;
                h--;
            }
            else if(a[l]<=a[m]){
                if(a[l]<=t&&t<=a[m]){
                    h=m-1;
                }
                else l=m+1;
            }
            else{
                if(a[m]<=t&&t<=a[h])l=m+1;
                else h=m-1;
            }
        
        }

        return false;

    }
};