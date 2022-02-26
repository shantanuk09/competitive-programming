// 429. N-ary Tree Level Order Traversal
// A BFS based solution.
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        int level = -1;
        vector<vector<int>> vr;
        if(root == NULL) return {};
        queue<Node*> qe;
        qe.push(root);
        while(!qe.empty()){
            // Add a new row to the vector.
            vr.emplace_back();
            for(int i = qe.size(); i > 0; i--){
                Node *current = qe.front();
                qe.pop();
                vr.back().push_back(current -> val);
                for(Node* child : current -> children)
                    qe.push(child);
            }
        }
        return vr;
    }
};

// A DFS based solution.
class Solution {
public:
    void DFS(Node *root, vector<vector<int>> &vr, int level){
        if(root == NULL) return;
        if(level == vr.size()) vr.emplace_back();
        vr[level].push_back(root -> val);
        for(Node *child : root -> children)
            DFS(child, vr, level + 1);
    }
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> vr = {};
        DFS(root, vr, 0);
        return vr;
    }
};