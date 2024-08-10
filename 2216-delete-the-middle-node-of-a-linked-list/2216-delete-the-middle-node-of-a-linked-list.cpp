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
static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL) return NULL;
        int length = 0;
        ListNode* p = head;
        while (p != nullptr) {
            length++;
            p = p->next;
        }
        if(length==1) return NULL;
        int mid;
        if(length%2==1)
        {
            mid = (length + 1) / 2;
        }
        else
        {
            mid = (length + 2) / 2;
        }
        int temp = 0;
        p = head;
        while (p != nullptr) {
            temp++;
            if (temp == mid - 1) {
                p->next = p->next->next;
            }
            p = p->next;
        }
        return head;
    }
};
