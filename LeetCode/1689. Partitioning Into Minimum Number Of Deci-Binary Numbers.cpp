// LeetCode 1689. Partitioning Into Minimum Number Of Deci-Binary Numbers
class Solution {
public:
    int minPartitions(string n) {
        int answer = 0;
        for(auto c : n)
            answer = max(answer, c - '0');
        return answer;
    }
};