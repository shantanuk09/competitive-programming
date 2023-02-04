// LeetCode 1233. Remove Sub-Folders from the Filesystem
class Solution{
public:
    vector<string> removeSubfolders(vector<string>& folder){
        sort(folder.begin(), folder.end());
        unordered_map<string, int> visited;
        vector<string> answer;
        for(auto f : folder){
            string parent = f;
            while(parent.size()){
                while(isalpha(parent.back()))
                    parent.pop_back();
                parent.pop_back();
                if(visited[parent] == 1) break;
            }
            if(parent.size() == 0){
                visited[f] = 1;
                answer.push_back(f);
            }
        }
        return answer;
    }
};