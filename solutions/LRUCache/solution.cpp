struct Node {
    int key, value;
    Node *prev, *next;
};

class LRUCache {
    int maxSize;
    unordered_map<int, Node*> key2Node;
    // sentinels
    Node *head, *tail;
 
    // removing nodes from head
    Node* remove(Node* n){
        Node *before = n->prev, *after = n->next;
        before->next = after;
        after->prev = before;
        return n;
    }

    // recently accessed nodes get moved to tail
    void putAtTail(Node* n){
        Node* before = tail->prev;
        before->next = n;
        n->prev = before;
        tail->prev = n;
        n->next = tail;
    }
    
public:
    LRUCache(int capacity) : maxSize(capacity){
        head = new Node {-1, -1, 0, 0};
        tail = new Node {-1, -1, 0, 0};
        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if (!key2Node.count(key)) return -1;
        putAtTail(remove(key2Node[key]));
        return key2Node[key]->value;
    }

    void put(int key, int value) {
        if (key2Node.count(key)){
            key2Node[key]->value = value;
            putAtTail(remove(key2Node[key]));
            return;
        }

        if (key2Node.size() >= maxSize){
            key2Node.erase(head->next->key);
            remove(head->next);
        }

        Node* n = new Node{key, value, 0, 0};
        key2Node[key] = n;
        putAtTail(n);
    }
};

// ["LRUCache","put","put","put","put","get","get"]
// [[2],[2,1],[1,1],[2,3],[4,1],[1],[2]]

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
