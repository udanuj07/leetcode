class Solution{
public:
    vector<string> restoreIpAddresses(string s){
        vector<string> res;
        int n=s.size();
        if(n<4||n>12) return res;
        string a,b,c,d;
        for(int i=1;i<=3;++i){
            if(i>n-3) break;
            if(s[0]=='0'&&i>1) break;
            int ai=stoi(s.substr(0,i));
            if(ai>255) break;
            for(int j=1;j<=3;++j){
                if(i+j>n-2) break;
                if(s[i]=='0'&&j>1) break;
                int bj=stoi(s.substr(i,j));
                if(bj>255) break;
                for(int k=1;k<=3;++k){
                    int l=n-i-j-k;
                    if(l<1||l>3) continue;
                    if(s[i+j]=='0'&&k>1) break;
                    if(s[i+j+k]=='0'&&l>1) continue;
                    int ck=stoi(s.substr(i+j,k));
                    if(ck>255) break;
                    int dl=stoi(s.substr(i+j+k,l));
                    if(dl>255) continue;
                    res.push_back(s.substr(0,i)+"."+s.substr(i,j)+"."+s.substr(i+j,k)+"."+s.substr(i+j+k,l));
                }
            }
        }
        return res;
    }
};