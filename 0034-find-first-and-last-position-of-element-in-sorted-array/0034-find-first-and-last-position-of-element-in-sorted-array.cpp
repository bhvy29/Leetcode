class Solution {
public:
    vector<int> searchRange(vector<int>& a, int target) {
       
       int l=0,h=a.size()-1,m;
       vector<int> output;
       if(a.size()==0){
            output.push_back(-1);
            output.push_back(-1);
            return output;
       }
       while(l<=h){
        m=l+(h-l)/2;
        if(a[m]>=target)
            h=m-1;
        
        else l=m+1;
       }
       if(l<a.size() && a[l]==target)
       output.push_back(l);
       else output.push_back(-1);
       int p=0,q=a.size()-1;
       while(p<=q){
         m=p+(q-p)/2;
        if(a[m]>target)
            q=m-1;
        
        else p=m+1;
       }
       if(q<a.size()&&a[q]==target)
       output.push_back(q);
       else output.push_back(-1);
       return output;
    }

};