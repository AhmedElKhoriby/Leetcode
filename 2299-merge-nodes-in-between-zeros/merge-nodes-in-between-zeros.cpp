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
class Solution {
public:
    void rec(ListNode* head, ListNode* ans) {
        if (!head) return;
        if (head->val != 0) {
            ans->val += head->val;
            rec(head->next, ans);
        }
        else {
            if(!head->next)return;
            ans->next = new ListNode();
            rec(head->next, ans->next);
        }
    }

    ListNode* mergeNodes(ListNode* head) {
        if (!head) return {};
        ListNode* ans = new ListNode();
        rec(head->next, ans);
        return ans;
    }
};