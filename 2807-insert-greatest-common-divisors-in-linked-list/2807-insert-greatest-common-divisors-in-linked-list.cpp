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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* p=head;
        ListNode* q=head->next;
        while(q!=NULL)
        {
            int sol=__gcd(p->val,q->val);
            ListNode* temp=new ListNode(sol);
            p->next=temp;
            temp->next=q;
            p=q;
            q=q->next;
        }
        return head;
    }
};