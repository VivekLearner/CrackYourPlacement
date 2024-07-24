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

long long multiplyTwoLists(Node *first, Node *second) {
    // code here
    long long  mod = 1000000007;
    Node *temp1=first;
    Node *temp2 = second;
    long long s1=0,s2=0;
    while(temp1!=nullptr) {
        s1=(s1*10)%mod+temp1->data;
        temp1=temp1->next;
    }
    while(temp2!=nullptr) {
        s2=(s2*10)%mod+temp2->data;
        temp2=temp2->next;
        
    }
    return (s1*s2)%mod;
}
