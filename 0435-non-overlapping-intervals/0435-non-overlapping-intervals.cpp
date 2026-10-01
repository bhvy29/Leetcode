class Solution {
public:
    static bool compare(vector<int>&a ,vector<int>&b){
        return a[1]<b[1];
    }

    int eraseOverlapIntervals(vector<vector<int>>& interval) {
        sort(interval.begin(),interval.end(),compare);
        int cnt=0;
        int end =interval[0][1];

        for(int i=1;i<interval.size();i++){
            if(interval[i][0]<end){
                cnt++;
            }
            else{
                end=interval[i][1];
        }
        }
        return cnt;
    }
};