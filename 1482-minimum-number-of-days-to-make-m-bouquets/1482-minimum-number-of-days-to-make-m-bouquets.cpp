class Solution {
public:

    int poss(vector<int>&a,int mid,int m,int k){
        int cnt=0,NoOfBouque=0;
        for(int i=0;i<a.size();i++){
            if(a[i]<=mid)cnt++;
            else{
                NoOfBouque+=(cnt/k);
                cnt=0;
            }

        }
         NoOfBouque+=(cnt/k);
         if( NoOfBouque>=m)return true;
         else return false;
    }

    int ma(vector<int>&a){
        int maxi=a[0];
        for(int i=0;i<a.size();i++){
            maxi=max(a[i],maxi);
        }
        return maxi;
    }
      int mn(vector<int>&a){
        int mini=a[0];
        for(int i=0;i<a.size();i++){
            mini=min(a[i],mini);
        }
        return mini;
    }
    int minDays(vector<int>& a, int m, int k) {
        int n=a.size();
        if ((long long)m * k > (long long)n) return -1;
        int l=mn(a),h=ma(a),mid;
        while(l<=h){
            mid=l+(h-l)/2;
            if(poss(a,mid,m,k)==true)h=mid-1;
            else l=mid+1;
        }
        return l;
    }
};