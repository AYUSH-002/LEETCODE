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
    ListNode* sortList(ListNode* head) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
        ListNode* p=head;
        vector<int>res;
        while(p!=NULL)
        {
            res.push_back(p->val);
            p=p->next;
        }
        sort(res.begin(),res.end());
        p=head;
        int index=0;
        while(p!=NULL && index<res.size())
        {
            p->val=res[index];
            index++;
            p=p->next;
        }
        return head;
    }
};