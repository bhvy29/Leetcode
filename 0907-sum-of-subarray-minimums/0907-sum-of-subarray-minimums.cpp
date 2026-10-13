class Solution {
public:

    vector<int> FindNSE(vector<int>&arr){
        stack<int>st;
        vector<int> nse(arr.size());
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty()&&arr[st.top()]>=arr[i])st.pop();
            nse[i]=st.empty()?arr.size():st.top();
            st.push(i);

        }
        return nse;
    }

    vector<int> FindPSEE(vector<int>&arr){
        stack<int> st;
        vector<int> psee(arr.size());
        for(int i=0;i<arr.size();i++){
            while(!st.empty()&&arr[st.top()]>arr[i])st.pop();
            psee[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return psee;
    }


    int sumSubarrayMins(vector<int>& arr) {
        vector<int> nse=FindNSE(arr);
        vector<int> psee=FindPSEE(arr);
        int total=0;
        int mod=1e9+7;

        for(int i=0;i<arr.size();i++){
            int right=nse[i]-i;
            int left=i-psee[i];
            total=(total+(right*left*1LL*arr[i])%mod)%mod;
        }
        return total;
    }
};