class Solution {
public:
    int numPrimeArrangements(int n) {
        const int M=1e9+7;
        bool p[101]={};
        int c=0;
        for(int i=2;i<=n;i++){
            if(!p[i]){
                c++;
                for(int j=i*i;j<=n;j+=i)p[j]=1;
            }
        }
        long long a=1,b=1;
        for(int i=1;i<=c;i++)a=a*i%M;
        for(int i=1;i<=n-c;i++)b=b*i%M;
        return a*b%M;
    }
};