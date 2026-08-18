class Solution {
public:

    int maxi(vector<int>&a){
        int ma=a[0];
        for(int i=1;i<a.size();i++){
            ma=max(ma,a[i]);
        }
        return ma;
    }

    int sum(vector<int>&a){
        int summ=0;
        for(int i=0;i<a.size();i++){
            summ+=a[i];
        }
        return summ;
    }

    int fun(vector<int>&a,int m){
        int k=1,load=a[0];
        for(int i=1;i<a.size();i++){
            if(load+a[i]<=m){
                load+=a[i];
            }
            else {
                k++;
                load=a[i];
                }
        }
        return k;

    }

    int splitArray(vector<int>& a, int k) {
        int l=maxi(a),h=sum(a);
        while(l<=h){
            int m=(l+h)/2;
            int noofk=fun(a,m);
            if(noofk>k){
                l=m+1;
            }
            else h=m-1;
        }
        return l;
    }
};