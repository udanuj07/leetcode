class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string, int> wordCount;
        for (const auto& word : words) {
            wordCount[word]++;
        }
        
        vector<int> result;
        int sLen = s.length();
        int numWords = words.size();
        int wordLen = words[0].length();
        
        for (int i = 0; i < wordLen; ++i) {
            int left = i, right = i;
            unordered_map<string, int> windowCount;
            
            while (right + wordLen <= sLen) {
                string word = s.substr(right, wordLen);
                right += wordLen;
                
                if (wordCount.find(word) == wordCount.end()) {
                    windowCount.clear();
                    left = right;
                    continue;
                }
                
                windowCount[word]++;
                
                while (windowCount[word] > wordCount[word]) {
                    string leftWord = s.substr(left, wordLen);
                    windowCount[leftWord]--;
                    left += wordLen;
                }
                
                if (right - left == numWords * wordLen) {
                    result.push_back(left);
                }
            }
        }
        
        return result;
    }
};
