class Solution {
public:

    int maxi(vector<int> &a){
        int ma=a[0];
        for(int i=0;i<a.size();i++){
            ma=max(a[i],ma);
        }
        return ma;
    }

    long long total(vector<int>&a,int m){
        long long totalhrs = 0;
        for(int i=0;i<a.size();i++){
            totalhrs += (a[i] + m - 1) / m;
        }
        return totalhrs;
    }

    int minEatingSpeed(vector<int>& a, int h) {
        int l=1,r=maxi(a),m;
        while(l<=r){
            m=l+(r-l)/2;
            if(h>=total(a,m))r=m-1;
            else l=m+1;
        }
        return l;
    }
};