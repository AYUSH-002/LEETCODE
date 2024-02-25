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
    ListNode* middleNode(ListNode* head) {
        ListNode*p=head;
        int len=0;
        while(p!=NULL)
        {
            len++;
            p=p->next;
        }
        len=(len/2)+1;
        int c=0;
        ListNode*q;
        p=head;
        while(p!=NULL)
        {
            c++;
            if(len==c)
            {
                q=p;
                break;
            }
            p=p->next;
        }
        return q;
    }
};