class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)return true;
        int l=1,h=num/2;
        long long m;
        while(l<=h){
         m=(l+h)/2;
            if(m*m>num)h=m-1;
            else if (m*m<num)l=m+1;
        else return true;
        }
     return false;
    }
};