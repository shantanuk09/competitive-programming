// LeetCode 76. Minimum Window Substring
class Solution{
public:
    string minWindow(string s, string t){
        vector<int> freq(128, 0);
        for(auto c : t)
            freq[c]++;
        int counter = t.size();
        int start = 0;
        int end = 0;
        int length = INT_MAX;
        int head = 0;
        while(end < s.size()){
            
            if(freq[s[end]] > 0) counter--;
            // Decrease frequency of the current character.
            freq[s[end]]--;
            // Increment end.
            end++;
            // Found substring with all characters.
            while(counter == 0){
                if(end - start < length){
                    length = min(length, end - start);
                    head = start;
                }
                // Increase frequency of character out of window.
                freq[s[start]]++;
                if(freq[s[start]] > 0) counter++;
                start++;
            }
        }
        return length == INT_MAX ? "" : s.substr(head, length);
    }
};