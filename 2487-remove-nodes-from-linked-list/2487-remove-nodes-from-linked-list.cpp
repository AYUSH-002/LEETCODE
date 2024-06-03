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
    ListNode* removeNodes(ListNode* head) {

        ListNode* curr = head;
        stack<ListNode*> st;

        while(curr != nullptr){
            while(!st.empty() && st.top()->val < curr->val){
                st.pop();
            }
            st.push(curr);
            curr = curr->next;
        }

        ListNode* nxt = nullptr;
        ListNode* top = nullptr;
        while(!st.empty()){
            top = st.top();
            st.pop();

            top->next = nxt;
            nxt = top;
        }

        return top;
    }
};