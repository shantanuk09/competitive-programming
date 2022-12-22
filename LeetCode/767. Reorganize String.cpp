// LeetCode 767. Reorganize String
// Priority Queue.
class Solution{
public:
    bool operator()(pair<char, int> &p1, pair<char, int> &p2){
        return p1.second < p2.second;
    }

    string reorganizeString(string s){
        int n = s.size();
        string answer;
        unordered_map<char, int> frequency;
        priority_queue<pair<char, int>, vector<pair<char, int>>, Solution> priorityByFrequency;
        for(auto c : s)
            frequency[c]++;
        for(auto [character, freq] : frequency)
            priorityByFrequency.push(make_pair(character, freq));
        while(n){
            auto firstPair = priorityByFrequency.top();
            priorityByFrequency.pop();
            answer += firstPair.first;
            firstPair.second--;
            n--;

            if(n == 0) break;

            if(priorityByFrequency.size() == 0) return "";
            auto secondPair = priorityByFrequency.top();
            priorityByFrequency.pop();
            answer += secondPair.first;
            secondPair.second--;
            n--;

            if(firstPair.second != 0) priorityByFrequency.push(firstPair);
            if(secondPair.second != 0) priorityByFrequency.push(secondPair);
        }
        return answer;
    }
};
