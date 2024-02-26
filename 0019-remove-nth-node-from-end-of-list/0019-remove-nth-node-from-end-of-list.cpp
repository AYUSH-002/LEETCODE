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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*p=head;
        int len=0;
        while(p!=NULL)
        {
            len++;
            p=p->next;
        }
        p=head;
        int count=0;
        len-=n;
        while(p!=NULL)
        {
            if(len==0)
            {
                ListNode*q=NULL;
                q=p->next;
                p->next=NULL;
                return q;
            }
            count++;
            if(count==len)
            {
                p->next=p->next->next;
                break;
            } 
            p=p->next;
        }
        return head;
    }
};