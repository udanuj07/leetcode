class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt = 0;
        for (char s : stones)
            for (char j : jewels)
                if (s == j)
                    ++cnt;
        return cnt;
    }
};