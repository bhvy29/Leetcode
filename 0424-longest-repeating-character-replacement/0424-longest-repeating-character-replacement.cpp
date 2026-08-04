class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,maxl=0,maxf=0;

        vector<int>hash(256,0);

        for(int r=0;r<s.size();r++){
            hash[s[r]]++;

            maxf = max(maxf, hash[s[r]]);

            while((r-l+1)-maxf>k){
                hash[s[l]]--;
                l++;
            }
            maxl=max(maxl,r-l+1);
        }
        return maxl;
        
    }
};