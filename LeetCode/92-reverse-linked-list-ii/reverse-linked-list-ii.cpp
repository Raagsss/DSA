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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* curr=head;
        ListNode* next=curr->next;
        ListNode* prev=nullptr;
        int i=1;

        while(curr!=NULL && i<left) {
            prev=curr;
            curr=curr->next;
            i++;
        }

        ListNode* toStart=prev;
        ListNode* start=curr;
        prev=nullptr;

        while(curr!=NULL && i<right+1) {
            ListNode* nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
            i++;
        }
        start->next=curr;

        if(toStart!=NULL) {
            toStart->next=prev;
        }else {
            return prev;
        }

        return head;


    }
};