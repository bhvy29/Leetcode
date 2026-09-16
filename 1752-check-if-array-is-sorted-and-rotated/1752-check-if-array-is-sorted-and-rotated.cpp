class Solution {
public:
    bool check(vector<int>& nums) {
        int k;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
            k=i;
            break;
            }
        }
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.end());
        int sorted=true;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1])sorted=false;
        }
        if(sorted)return true;
        else return false;
    }
};