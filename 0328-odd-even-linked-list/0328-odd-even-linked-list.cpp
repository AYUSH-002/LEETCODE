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
    ListNode* oddEvenList(ListNode* head) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        if(head==NULL)
        {
            return head;
        }
        ListNode*odd=head,*even=head->next;
        ListNode*evenNode=even;
        while(even && even->next)
        {
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        odd->next=evenNode;
        return head;
    }
};