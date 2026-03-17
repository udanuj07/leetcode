class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int cnt[1001] = {};
        for(int x : arr1) cnt[x]++;
        int i = 0;
        for(int x : arr2) {
            while(cnt[x] > 0) {
                arr1[i++] = x;
                cnt[x]--;
            }
        }
        for(int x = 0; x < 1001; x++) {
            while(cnt[x] > 0) {
                arr1[i++] = x;
                cnt[x]--;
            }
        }
        return arr1;
    }
};