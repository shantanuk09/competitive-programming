// LeetCode 208. Implement Trie (Prefix Tree)
// Trie.
class Trie{
public:
    struct TrieNode{
        TrieNode *child[26];
        bool isLeafNode;
    };

    TrieNode *root = NULL;

    TrieNode* getTrie(){
        TrieNode *node = new TrieNode();
        for(int i = 0; i < 26; i++)
            node -> child[i] = NULL;
        node -> isLeafNode = false;
        return node;
    }
    
    void insert(string word) {
        if(search(word)) return;
        if(!root) root = getTrie();
        TrieNode *node = root;
        for(int i = 0; i < word.size(); i++){
            int index = word[i] - 'a';
            if(!node -> child[index]) node -> child[index] = getTrie();
            node = node -> child[index];
        }
        node -> isLeafNode = true;
    }
    
    bool search(string word){
        TrieNode *node = root;
        if(!root) return false;
        for(int i = 0; i < word.size() && node; i++){
            int index = word[i] - 'a';
            node = node -> child[index];
        }
        if(node) return node -> isLeafNode;
        return false;
    }
    
    bool startsWith(string prefix){
        TrieNode *node = root;
        if(!root) return false;
        for(int i = 0; i < prefix.size() && node; i++){
            int index = prefix[i] - 'a';
            node = node-> child[index];
        }
        return node != NULL;
    }
};