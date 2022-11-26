// LeetCode 2120. Execution of All Suffix Instructions Staying in a Grid
class Solution{
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s){
        int x, y, moves;
        vector<int> vr;
        for(int i = 0; i < s.size(); i++){
            x = startPos[1], y = startPos[0], moves = 0;
            for(int j = i; j < s.size(); j++){
                if(s[j] == 'U') y--;
                else if(s[j] == 'D') y++;
                else if(s[j] == 'R') x++;
                else x--;
                if(x < 0 || x >= n || y < 0 || y >= n) break;
                else moves++;
            }
            vr.push_back(moves);
        }
        return vr;
    }
};