// LeetCode 207. Course Schedule
// Use DFS to detect cycles. 
class Solution{
public:
    vector<vector<int>> buildGraph(int numCourses, vector<vector<int>> &prerequisites){
        vector<vector<int>> graph(numCourses);
        for(auto p : prerequisites)
            graph[p[1]].push_back(p[0]);
        return graph;
    }

    bool acyclic(vector<vector<int>> &graph, vector<bool> &todo, vector<bool> &done, int node){
        if(todo[node]) return false;
        if(done[node]) return true;
        todo[node] = done[node] = true;
        for (int v : graph[node]) {
            if (!acyclic(graph, todo, done, v)) {
                return false;
            }
        }
        todo[node] = false;
        return true;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites){
        vector<vector<int>> graph = buildGraph(numCourses, prerequisites);
        vector<bool> todo(numCourses, false);
        vector<bool> done(numCourses, false);
        for(int i = 0; i < numCourses; i++)
            if(!done[i] && !acyclic(graph, todo, done, i)) return false;
        return true;
    }
};