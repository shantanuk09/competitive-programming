// LeetCode 1769. Minimum Number of Operations to Move All Balls to Each Box
class Solution {
public:
    vector<int> minOperations(string boxes) {
        int moves;
        vector<int> answer;
        for(int i = 0; i < boxes.size(); i++){
            moves = 0;
            for(int j = 0; j < boxes.size(); j++)
                if(boxes[j] == '1') moves += abs(i - j);
            answer.push_back(moves);
        }
        return answer;        
    }
};