class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        struct Cmp {
            bool operator()(ListNode* a, ListNode* b) const {
                return a->val > b->val;
            }
        };
        priority_queue<ListNode*, vector<ListNode*>, Cmp> pq;
        for (auto node : lists)
            if (node) pq.push(node);
        ListNode dummy(0);
        ListNode* tail = &dummy;
        while (!pq.empty()) {
            ListNode* node = pq.top();
            pq.pop();
            tail->next = node;
            tail = node;
            if (node->next) pq.push(node->next);
        }
        return dummy.next;
    }
};
