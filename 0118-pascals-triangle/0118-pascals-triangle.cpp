class Solution {
public:

    vector<int> makerow(int row){
        vector<int> ansrow;
        long long ans=1;
        for(int i=1;i<=row;i++){
            ansrow.push_back(ans);
            ans=ans*(row-i)/i;
        }
        return ansrow;
    }

    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        for(int i=1;i<=n;i++){
        ans.push_back(makerow(i));
        }
        return ans;
    }
};