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
    ListNode *reverse(ListNode *head) {
        ListNode *curr = head;
        ListNode *prev=nullptr;
        ListNode *forward=nullptr;
        while(curr!=nullptr) {
            forward = curr->next;
            curr->next = prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode *res=head->next;
        ListNode *slow=head;
        ListNode *fast=head->next;
        while(fast!=nullptr && fast->next!=nullptr) {
            slow=slow->next;
            fast=fast->next->next;
        }
        fast=slow->next;
        slow->next=nullptr;
        ListNode *rev = reverse(fast);
        ListNode *curr=head;
        while(curr && rev) {
            ListNode *d = curr->next;
            curr->next=rev;
            rev=rev->next;
            curr->next->next=d;
            curr=d;
        }
    }
};
