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
    ListNode* reverseList(ListNode* head) {
        // ListNode *prev = nullptr;
        // ListNode *curr = head;
        // while(curr != NULL)
        // {
        //     ListNode *next = curr -> next;
        //     curr -> next = prev;
        //     prev = curr;
        //     curr = next;
        // }
        // return prev;
        stack<int>st;
        ListNode *curr = head;
        if(curr == NULL)
        {
            return NULL;
        }
        while(curr != NULL)
        {
            st.push(curr -> val);
            curr = curr -> next;
        }
        ListNode *newNode = new ListNode(st.top());
        ListNode *result = newNode;
        st.pop();
        while(!st.empty())
        {
            ListNode *temp = new ListNode(st.top());
            st.pop();
            newNode -> next = temp;
            newNode = newNode -> next;
        }
        return result;
    }
};
