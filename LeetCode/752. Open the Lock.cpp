// LeetCode 752. Open the Lock
// BFS.
class Solution{
public:
    int openLock(vector<string>& deadends, string target){
        unordered_set<string> dead(deadends.begin(), deadends.end());
        unordered_set<string> visited;
        int result = 0;
        if(dead.find("0000") != dead.end()) return -1;
        queue<string> qe;
        qe.push("0000");
        visited.insert("0000");
        while(!qe.empty()){
            int levelSize = qe.size();
            while(levelSize--){
                string up, down, current = qe.front();
                qe.pop();
                if(current == target) return result;
                for(int i = 0; i < 4; i++){
                    down = up = current;
                    char upChar = up[i], downChar = down[i];
                    up[i] = (upChar == '9') ? '0' : upChar + 1;
                    down[i] = (downChar == '0') ? '9' : downChar - 1;
                    if(visited.find(up) == visited.end() && dead.find(up) == dead.end()){
                        qe.push(up);
                        visited.insert(up);
                    }
                    if(visited.find(down) == visited.end() && dead.find(down) == dead.end()){
                        qe.push(down);
                        visited.insert(down);
                    }
                }
            }
            result++;
        }
        return -1;
    }
};

