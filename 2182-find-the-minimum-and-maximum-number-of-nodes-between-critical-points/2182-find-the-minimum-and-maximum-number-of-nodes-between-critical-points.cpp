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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ios_base::sync_with_stdio(0);
        if (!head || !head->next || !head->next->next) {
            return {-1, -1};
        }

        vector<int> criticalPoints;
        ListNode* previousNode = head;
        ListNode* currentNode = head->next;
        int position = 1; 

        while (currentNode->next != nullptr) {
            if ((currentNode->val > previousNode->val && currentNode->val > currentNode->next->val) ||
                (currentNode->val < previousNode->val && currentNode->val < currentNode->next->val)) {
                criticalPoints.push_back(position);
            }
            previousNode = currentNode;
            currentNode = currentNode->next;
            position++;
        }

        if (criticalPoints.size() < 2) {
            return {-1, -1};
        }

        int minimumDistance = INT_MAX;
        for (size_t i = 1; i < criticalPoints.size(); ++i) {
            minimumDistance = min(minimumDistance, criticalPoints[i] - criticalPoints[i - 1]);
        }

        int maximumDistance = criticalPoints.back() - criticalPoints.front();
        return {minimumDistance, maximumDistance};
    }
};
