class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        
        for (int num : nums) {
            int found = -1;
            // Try values from 0 to num
            for (int x = 0; x <= num; x++) {
                if ((x | (x + 1)) == num) {
                    found = x;
                    break; // Found the minimum x
                }
            }
            ans.push_back(found);
        }
        
        return ans;
    }
};