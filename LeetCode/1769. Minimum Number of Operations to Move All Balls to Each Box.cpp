// LeetCode 1769. Minimum Number of Operations to Move All Balls to Each Box
// O(n^2)
class Solution{
public:
    vector<int> minOperations(string boxes){
        vector<int> vr(boxes.size(), 0);
        for(int i = 0; i < boxes.size(); i++)
            for(int j = 0; j < boxes.size(); j++)
                if(boxes[j] == '1') vr[i] += abs(i - j);
        return vr;
    }
};

// Linear.
class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> vr(boxes.size(), 0);
        for(int i = 0, count = 0, op = 0; i < boxes.size(); i++){
            vr[i] += op;
            count += boxes[i] == '1' ? 1 : 0;
            op += count;
        }
        for(int i = boxes.size() - 1, count = 0, op = 0; i >= 0; i--){
            vr[i] += op;
            count += boxes[i] == '1' ? 1 : 0;
            op += count;
        } 
        return vr;
    }
};