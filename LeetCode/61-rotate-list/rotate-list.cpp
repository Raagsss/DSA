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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) {
            return head;
        }

        ListNode* temp=head;
        ListNode* curr=head;
        int cnt=1;
        while(temp->next) {
            cnt++;
            temp=temp->next;
        }
        temp->next=head;

        k=k%cnt;
        int cnt2=cnt-k;
        for(int i=1;i<cnt2;i++) {
            curr=curr->next;
        }

        ListNode* newHead=curr->next;
        curr->next=nullptr;

        return newHead;

    }
};