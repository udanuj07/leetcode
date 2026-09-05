int dp[102][2];

int fun(int i,vector<int>&nums,int f){
    if(i==nums.size()-1){
        if(f==1) return 0;
        return nums[i];
    }

    if(dp[i][f]!=-1) return dp[i][f];

    if(i>=nums.size()) return 0;

    int nf=f;

    if(i==0){
        nf=1;
    }

    int rob=nums[i]+fun(i+2,nums,nf);
    int not_rob=fun(i+1,nums,f);

    return dp[i][f]=max(rob,not_rob);
}


class Solution {
public:
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return fun(0,nums,0);
    }
};