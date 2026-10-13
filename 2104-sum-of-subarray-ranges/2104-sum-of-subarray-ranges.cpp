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

    vector<int> FindNGE(vector<int>&arr){
        stack<int> st;
        vector<int> nge(arr.size());
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty()&&arr[st.top()]<=arr[i])st.pop();
            nge[i]=st.empty()?arr.size():st.top();
            st.push(i);
        }
        return nge;
    }

    vector<int> FindPGEE(vector<int>&arr){
        stack<int> st;
        vector<int> pgee(arr.size());
        for(int i=0;i<arr.size();i++){
            while(!st.empty()&&arr[st.top()]<arr[i])st.pop();
            pgee[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return pgee;
    }

    long long sumSubarrayMins(vector<int>& arr) {
        vector<int> nse=FindNSE(arr);
        vector<int> psee=FindPSEE(arr);
        long long total1=0;

        for(int i=0;i<arr.size();i++){
            int right=nse[i]-i;
            int left=i-psee[i];
            total1=total1+(right*left*1LL*arr[i]);
        }
        return total1;
    }

    long long sumSubarrayMaxs(vector<int>& arr){
        vector<int> nge=FindNGE(arr);
        vector<int> pgee=FindPGEE(arr);
        long long total2=0;
        

        for(int i=0;i<arr.size();i++){
            int left=i-pgee[i];
            int right=nge[i]-i;
            total2=total2+(left*right*1LL*arr[i]);

        }
        return total2;
    }


    long long subArrayRanges(vector<int>& arr) {
        return sumSubarrayMaxs(arr)- sumSubarrayMins(arr);
    }
};