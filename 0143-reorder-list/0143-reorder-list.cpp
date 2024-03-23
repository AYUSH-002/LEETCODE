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
    void reorderList(ListNode* head) {
        ListNode*temp=head;
        vector<int>res;
        while(temp!=NULL)
        {
            res.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        int i=0;
        int j=res.size()-1;
        int flag=0;
        while(i<=j)
        {
            if(flag%2==1)
            {
                temp->val=res[j];
                j--;
                temp=temp->next;
                flag++;
            }
            else
            {
                temp->val=res[i];
                i++;
                temp=temp->next;
                flag++;
            }
        }
    }
};