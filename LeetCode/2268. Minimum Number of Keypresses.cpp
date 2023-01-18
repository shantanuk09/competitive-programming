// LeetCode 2268. Minimum Number of Keypresses
class Solution{
public:
    int minimumKeypresses(string s){
        int count = 0;
        int buttonsPressed = 0;
        map<int, int> freq;
        priority_queue<int> mostFrequent;
        for(auto c : s)
            freq[c]++;
        for(auto [key, value] : freq)
            mostFrequent.push(value);
        while(mostFrequent.size()){
            int f = mostFrequent.top();
            if(buttonsPressed < 9) count += f;
            else if(9 <= buttonsPressed && buttonsPressed < 18) count += 2 * f;
            else count += 3 * f;
            buttonsPressed++;
            mostFrequent.pop();
        }
        return count;
    }
};