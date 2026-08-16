class Solution {
public:

    int fun(vector<int> &weights,int cap){
        int load=0,day=1;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>cap){
                day++;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return day;
    }
    int maxi(vector<int>&weights){
        int ma=weights[0];
        for(int i=1;i<weights.size();i++){
            ma=max(ma,weights[i]);
        }
        return ma;
    }
    int sum(vector<int>&weights){
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
        }
        return sum;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int l=maxi(weights),h=sum(weights),ans;
        while(l<=h){
            int m=(l+h)/2;
            if(fun(weights,m)<=days){
                h=m-1;
            }
            else l=m+1;
        }
            return l;
    }
};