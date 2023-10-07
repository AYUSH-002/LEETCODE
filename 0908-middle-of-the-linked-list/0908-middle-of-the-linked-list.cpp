static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
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
    ListNode* middleNode(ListNode* head) 
    {
        ListNode* p=head;
        int count=0;
        while(p!=NULL)
        {
            count++;
            p=p->next;
        }
        count=(count/2)+1;
        p=head;
        ListNode* q;
        int c=0;
        while(p!=NULL)
        {
            c++;
            if(c==count)
            {
                q=p;
                break;
            }
            p=p->next;
        }
        return q;
    }
};