class Solution {
public:
    int jump(vector<int>& nums) {
        int jump=0,l=0,r=0;
        while(r<nums.size()-1){
            int farthest =0;
            for(l=0;l<=r;l++){
                farthest=max(farthest,l+nums[l]);
            }
            l=r+1;
            r=farthest;
            jump++;
        }
        return jump;
    }
};