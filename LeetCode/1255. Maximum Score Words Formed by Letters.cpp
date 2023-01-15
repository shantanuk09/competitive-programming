// LeetCode 1255. Maximum Score Words Formed by Letters
class Solution{
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        map<char, int> freq;
        for(auto c : letters)
            freq[c]++;
        int finalScore = backtrack(words, freq, score, 0);
        return finalScore;
    }

    int backtrack(vector<string> &words, map<char, int> &freq, vector<int> &score, int index){
        int maxScore = 0;
        for(int i = index; i < words.size(); i++){
            int res = 0;
            bool isValid = true;
            for(auto c : words[i]){
                freq[c]--;
                res += score[c - 'a'];
                if(freq[c] < 0) isValid = false;
            }
            if(isValid){
                res += backtrack(words, freq, score, i + 1);
                maxScore = max(maxScore, res);
            }
            for(auto c : words[i])
                freq[c]++;
        }
        return maxScore;
    }
};