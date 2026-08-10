class Solution {
public:
    string toGoatLatin(string sentence) {
        static const unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        string result;
        result.reserve(sentence.size() * 2);
        string suffix = "a";
        int i = 0, n = sentence.size();
        while (i < n) {
            int start = i;
            while (i < n && sentence[i] != ' ') i++;
            int len = i - start;
            if (start != 0) result += ' ';
            if (vowels.count(sentence[start])) {
                result.append(sentence, start, len);
            } else {
                result.append(sentence, start + 1, len - 1);
                result += sentence[start];
            }
            result += "ma";
            result += suffix;
            suffix += 'a';
            if (i < n) i++;
        }
        return result;
    }
};