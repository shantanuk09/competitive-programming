// LeetCode 802. Find Eventual Safe States
// Use DFS to detect cycles. 
class Solution{
public:
    bool DFS(int source, vector<bool> &visited, vector<bool> &currentVisited, vector<vector<int>> &graph, vector<bool> &safe){
        visited[source] = true;
        currentVisited[source] = true;

        for(auto adjacent : graph[source]){
            if(visited[adjacent] == false){
                if(DFS(adjacent, visited, currentVisited, graph, safe) == false) return safe[source] = false;
            }
            else if(visited[adjacent] == true && currentVisited[adjacent] == true) return safe[source] = false;
        }
        currentVisited[source] = false;
        return safe[source];
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& graph){
        int vertices = graph.size();
        vector<bool> visited(vertices, false);
        vector<bool> currentVisited(vertices, false);
        vector<bool> safe(vertices, true);
        for(int i = 0; i < vertices; i++)
            if(visited[i] == false) DFS(i, visited, currentVisited, graph, safe);
        vector<int> nodes;
        for(int i = 0; i < vertices; i++)
            if(safe[i]) nodes.push_back(i);
        return nodes;
    }
};

