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

ListNode *sorting(*head) {
    vector<int> a = {0,0,0};
    ListNode *temp = head;
    while(temp!=nullptr) {
        a[temp->data]++;
        temp=temp->next;
    }
    temp=head;
    int i=0;
    while(temp!=null) {
        if(a[i]==0) {
            i++;
        }
        else {
            temp->data=i;
            a[i]--;
            temp=temp->next;
        }
    }

}