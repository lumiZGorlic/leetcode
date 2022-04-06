/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

using piln = pair<int, ListNode*>;

struct cmp{
    bool operator()(const piln& l, const piln& r){
        return l.first > r.first;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<piln, vector<piln>, cmp> pq;

        ListNode *head = new ListNode;
        ListNode* point = head;
        for (auto h: lists) if(h) pq.push({h->val, h});

        while (!pq.empty()){
            auto [val, cur] = pq.top(); pq.pop();
            ListNode* tmp = new ListNode(val);
            point->next = tmp;
            point = point->next;

            if(cur->next) pq.push({cur->next->val, cur->next});
        }

        return head->next;
    }
};
