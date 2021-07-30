struct TrieNode{
    TrieNode* abc[26];
    bool end;
    TrieNode(): end(false)
    {
        for (int i=0; i<26; i++) abc[i] = nullptr;
    }
};

// could add destructor to avoid leaks
class Trie {
    TrieNode* root;
public:
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* cur = root;
        for (const auto& c: word){            
            int idx = c - 'a';
            if (!cur->abc[idx]) cur->abc[idx] = new TrieNode;
            cur = cur->abc[idx];
        }
        cur->end = true;
    }

    bool search(string word) {
        TrieNode* cur = root;
        for (const auto& c: word){
            int idx = c - 'a';
            if (!cur->abc[idx]) return false;
            cur = cur->abc[idx];
        }
        if (cur->end != true) return false;
        return true;
    }

    bool startsWith(string prefix) {
        TrieNode* cur = root;
        for (const auto& c: prefix){
            int idx = c - 'a';
            if (!cur->abc[idx]) return false;
            cur = cur->abc[idx];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
