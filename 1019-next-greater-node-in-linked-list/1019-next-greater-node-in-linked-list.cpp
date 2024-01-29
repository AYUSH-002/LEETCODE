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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
        ListNode*p=head;
        while(p!=NULL)
        {
            int flag=-1;
            ListNode*q=p->next;
            while(q!=NULL)
            {
                if(q->val>p->val)
                {
                    ans.push_back(q->val);
                    flag=0;
                    break;
                }
                q=q->next;
            }
            if(flag==-1)
            {
                ans.push_back(0);
            }
            p=p->next;
        }
        return ans;
    }
};