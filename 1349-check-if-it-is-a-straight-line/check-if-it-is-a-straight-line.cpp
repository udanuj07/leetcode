class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        if(c.size()<3)return true;
        int dx=c[1][0]-c[0][0],dy=c[1][1]-c[0][1];
        for(int i=2;i<c.size();++i)
            if((c[i][0]-c[0][0])*dy-(c[i][1]-c[0][1])*dx)return false;
        return true;
    }
};