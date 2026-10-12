class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int i,n,s=0;
        n=size(nums);

        for(i=0;i<size(nums);i++){
            int k=i+1;
            if(n%k==0){
                s=s+nums[i]*nums[i];
            }
        }
        return s;
    }
};