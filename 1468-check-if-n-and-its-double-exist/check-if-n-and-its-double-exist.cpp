#include <unordered_set>

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> seen;
        for(int n:arr){
            if(seen.count(n*2)||(n%2==0&&seen.count(n/2)))return true;
            seen.insert(n);
        }
        return false;
    }
};