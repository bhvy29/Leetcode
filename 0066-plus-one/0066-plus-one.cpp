class Solution {
public:
    vector<int> plusOne(vector<int>& a) {
        if(a.back()!=9){
            a.back()++;
            return a;
        }
        else{
            reverse(a.begin(),a.end());
            int n=a.size();
            for(int i=0;i<n;i++){
                
                a[i]++;

             if(a[n-1]==10){
                    a[n-1]=0;
                    a.push_back(1);
                }
            else if(a[i]==10){
                    a[i]=0;
                    
                }
                else{
                    break;
                }

            }
            reverse(a.begin(),a.end());
        }
        
        return a;
    }
};