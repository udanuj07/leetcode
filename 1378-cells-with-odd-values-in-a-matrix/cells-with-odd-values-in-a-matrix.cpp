class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& idx) {
        vector<bool> r(m,0),c(n,0);
        for(auto& x:idx){r[x[0]]=!r[x[0]];c[x[1]]=!c[x[1]];}int o=0;for(int i=0;i<m;++i)for(int j=0;j<n;++j)if(r[i]!=c[j])++o;return o;
    }
};