class Solution {
public:
    int candy(vector<int>& rating) {
        int i=1;
        int sum=1;
        int n=rating.size();
        while(i<n){
            if(rating[i]==rating[i-1]){
                sum++;
                i++;
                continue;
            }
        
        int peak=1;
        int down=1;
        while(i<n && rating[i]>rating[i-1]){
            peak++;
            sum+=peak;
            i++;
        }
        while(i<n && rating[i]<rating[i-1]){
            sum+=down;
            i++;
            down++;
        }
        if(down>peak ){
            sum+=(down - peak);
        }
        }
        return sum;
    }
};