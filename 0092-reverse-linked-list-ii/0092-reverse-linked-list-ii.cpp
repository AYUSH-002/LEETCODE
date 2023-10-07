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
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        vector<int>ans;
        ListNode* curr=head;
        for(int i=1;i<left;i++)
        {
            curr=curr->next;
        }
        ListNode*prev=curr;
        for(int i=0;i<right-left+1;i++)
        {
            ans.push_back(prev->val);
            prev=prev->next;
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<right-left+1;i++)
        {
            curr->val=ans[i];
            curr=curr->next;
        }
        return head;
    }
};