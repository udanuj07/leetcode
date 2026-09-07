class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>pre;
        vector<int>suff;

        int m=0;
        for(int i=0;i<nums.size();i++){
           m=max(m,nums[i]);
           pre.push_back(m);
        }
        
        m=1e9;
        for(int i=nums.size()-1;i>=0;i--){
           m=min(m,nums[i]);
           suff.push_back(m);
        }

        reverse(suff.begin(),suff.end());

        for(int i=0;i<nums.size();i++){
            if(pre[i]-suff[i]<=k) return i;
        }

        return -1;
    }
};