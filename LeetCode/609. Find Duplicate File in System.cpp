// LeetCode 609. Find Duplicate File in System
class Solution{
public:
    vector<vector<string>> findDuplicate(vector<string>& paths){
        vector<vector<string>> duplicates;
        unordered_map<string, vector<string>> contentMap;
        for(auto path : paths){
            bool start = true;
            string s;
            string root;
            istringstream stream(path);
            while(stream >> s){
                if(start == true){
                    root = s;
                    start = false;
                }
                else{
                    int contentStart = s.find('(');
                    string content = s.substr(contentStart + 1, s.size() - contentStart - 2);
                    contentMap[content].push_back(root + "/" + s.substr(0, contentStart));
                }
            }
        }
        for(auto &[content, files] : contentMap)
            if(files.size() > 1) duplicates.push_back(files);
        return duplicates;
    }
};