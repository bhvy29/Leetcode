class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<int> arrival(n);
        vector<int> departure(n);
        for(int i=0;i<n;i++){
            arrival[i]=intervals[i][0];
            departure[i]=intervals[i][1];
        }
        sort(arrival.begin(),arrival.end());
        sort(departure.begin(),departure.end());

        int i=0,j=0,cnt=0,maxcnt=0;

        while(i<n){
            if(arrival[i]>departure[j]){
                cnt--;
                j++;
            }
            else{
                cnt++;
                i++;
            }
            maxcnt=max(maxcnt,cnt);
        }
        return maxcnt;
    }
};