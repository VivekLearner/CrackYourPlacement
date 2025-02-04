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

ListNode* sortList(ListNode* head) {
    vector<int> ans;
    ListNode *temp =head;
    while(temp!=nullptr) {
        ans.push_back(temp->val);
        temp=temp->next;
    }
    sort(ans.begin(),ans.end());
    temp=head;
    int i=0;
    while(temp!=nullptr) {
        temp->val=ans[i++];
        temp=temp->next;
    }
    return head;
}
