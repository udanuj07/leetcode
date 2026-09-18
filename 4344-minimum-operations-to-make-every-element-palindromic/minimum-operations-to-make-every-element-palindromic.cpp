vector<long long>even;
vector<long long>odd;

void fun(){
    for(long long i=1;i<=100000;i++){
        string s=to_string(i);
        string t=s;

        reverse(t.begin(),t.end());

        long long a=stoll(s+t);
        long long b=stoll(s+t.substr(1));

        if(a<=2000000002){
            if(a%2==0)
                even.push_back(a);
            else
                odd.push_back(a);
        }

        if(b<=2000000002){
            if(b%2==0)
                even.push_back(b);
            else
                odd.push_back(b);
        }
    }

    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
}

class Solution {
public:
    long long minOperations(vector<int>& nums) {

        static bool done=false;

        if(!done){
            fun();
            done=true;
        }

        long long k=0;

        for(auto a:nums){

            vector<long long>&v=(a%2==0 ? even : odd);

            int l=0;
            int h=v.size()-1;

            int ans=v.size();

            while(l<=h){
                int mid=(l+h)/2;

                if(v[mid]>=a){
                    ans=mid;
                    h=mid-1;
                }else{
                    l=mid+1;
                }
            }

            long long mm=1e18;

            if(ans<v.size()){
                mm=min(mm,abs(v[ans]-1LL*a)/2);
            }

            if(ans>0){
                mm=min(mm,abs(v[ans-1]-1LL*a)/2);
            }

            k+=mm;
        }

        return k;
    }
};