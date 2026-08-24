class Solution {
public:

    int ma(vector<int>&a){
        int maxi=a[0];
        for(int i=0;i<a.size();i++){
            maxi=max(maxi,a[i]);
        }
        return maxi;
    }
    
    int sumof(vector<int>& a, int d) {
        int sum = 0;
        for (int i = 0; i < a.size(); i++) {
            sum += (a[i] + d - 1) / d;  
        }
        return sum;
    }

    int smallestDivisor(vector<int>& a, int t) {
        int l=1,h=ma(a),ans=-1,m;
        while(l<=h){
            m=l+(h-l)/2;
            if(sumof(a,m)<=t){
                h=m-1;

            }
            else l=m+1;
        }
        return l;
    }
};