#include<bits/stdc++.h>
using namespace std;
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

ListNode *reverse(ListNode *head) {
    ListNode *curr=head;
    ListNode *forward=nullptr;
    ListNode *prev=nullptr;
    while(curr!=nullptr) {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
bool isPalindrome(ListNode* head) {
    ListNode *slow = head;
    ListNode *fast= head->next;
    while(fast!=nullptr && fast->next!=nullptr) {
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode *rev=reverse(slow->next);
    slow->next=nullptr;
    while(rev!=nullptr) {
        if(head->val!=rev->val) {
            return false;
        }
        head=head->next;
        rev=rev->next;
    }
    return true;
   
}
