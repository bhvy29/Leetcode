class Solution {
public:
    int majorityElement(vector<int>& a) {
        int n=a.size();
        int el=a[0],cnt=1;
        for(int i=1;i<n;i++){
            if(cnt==0){
                el=a[i];
                cnt=1;
            }
            else if(a[i]==el){
                cnt++;
            }
            else cnt--;
        }
        return el;
    }
};