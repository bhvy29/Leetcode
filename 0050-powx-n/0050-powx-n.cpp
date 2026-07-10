class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
    if(n==0)return ans;
    else if(n>0)
    {
    while(n>0)
    {
        if(n%2==0)
        {
            x=x*x;
            n=n/2;
        }
        else
        {
            ans=ans*x;
            n--;
        }
    }  
    return ans;  
    }
    else
    {
    long long t = n;
if (t < 0) t = -t;
       while(t>0)
    {
        if(t%2==0)
        {
            x=x*x;
            t=t/2;
        }
        else
        {
            ans=ans*x;
            t--;
        }
    }  
    return 1/(ans);  
    }
    
    

    }
};