class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int cnt=0;
    int mxcnt=0;
    
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            cnt++;
            mxcnt=max(mxcnt,cnt);
        }
        else if(nums[i]==0){
            cnt=0;
        }
    } 
    return mxcnt;   
    }
};