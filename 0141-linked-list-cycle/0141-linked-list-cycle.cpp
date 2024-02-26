/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
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
    bool hasCycle(ListNode *head) {
        ListNode*p=head;
        ListNode*q=head;
        while(q!=NULL && q->next!=NULL)
        {
            p=p->next;
            q=q->next->next;
            if(p==q)
            {
                return true;
            }
        }
        return false;
    }
};