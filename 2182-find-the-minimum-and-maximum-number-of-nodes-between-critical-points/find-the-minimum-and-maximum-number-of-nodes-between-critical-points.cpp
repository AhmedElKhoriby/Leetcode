class Solution {
private:
    int minDistance = INT_MAX;
    int firstCriticalIndex = -1;
    int lastCriticalIndex = -1;
    int prevIndex = -1;
    bool firstCriticalPointFound = false;

    bool isCriticalPoint(ListNode* last, ListNode* cur, ListNode* next) {
        return (last->val > cur->val && cur->val < next->val) || (last->val < cur->val && cur->val > next->val);
    }

    void findCriticalPoints(ListNode* last, ListNode* cur, ListNode* next, int index) {
        if (!next) return;

        if (isCriticalPoint(last, cur, next)) {
            if (!firstCriticalPointFound) {
                firstCriticalIndex = index;
                firstCriticalPointFound = true;
            } else {
                minDistance = min(minDistance, index - prevIndex);
            }
            prevIndex = index;
            lastCriticalIndex = index;
        }

        findCriticalPoints(cur, next, next->next, index + 1);
    }

public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (!head || !head->next || !head->next->next) {
            return {-1, -1};
        }

        findCriticalPoints(head, head->next, head->next->next, 1);

        if (firstCriticalIndex == lastCriticalIndex) {
            return {-1, -1};
        }

        int maxDistance = lastCriticalIndex - firstCriticalIndex;
        return {minDistance, maxDistance};
    }
};
