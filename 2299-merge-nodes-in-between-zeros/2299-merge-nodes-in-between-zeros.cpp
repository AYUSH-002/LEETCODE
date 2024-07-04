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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*newHead= new ListNode(0);
        ListNode*temp=newHead;
        newHead->next=temp;
        ListNode*p=head;
        int sum=0;
        int countZeros=0;
        while(p!=nullptr)
        {
            if(countZeros>0 && p->val==0)
            {
                ListNode*newNode= new ListNode(sum);
                temp->next=newNode;
                temp=newNode;
                countZeros++;
                sum=0;
                p=p->next;
            }
            else
            {
                countZeros++;
                sum+=p->val;
                p=p->next;
            }
        }
        return newHead->next;
    }
};