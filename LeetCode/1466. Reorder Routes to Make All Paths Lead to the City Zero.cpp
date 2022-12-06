// LeetCode 1466. Reorder Routes to Make All Paths Lead to the City Zero
// DFS.
class Solution{
public:
    int DFS(vector<vector<int>> &al, vector<bool> &visited, int from){
        auto change = 0;
        visited[from] = true;
        for(auto to : al[from])
            if(!visited[abs(to)]) change += DFS(al, visited, abs(to)) + (to > 0);
        return change;
    }

    int minReorder(int n, vector<vector<int>>& connections){
        vector<vector<int>> al(n);
        for(auto &c : connections){
            al[c[0]].push_back(c[1]);
            al[c[1]].push_back(-c[0]);
        }
        return DFS(al, vector<bool>(n) = {}, 0);
    }
};

