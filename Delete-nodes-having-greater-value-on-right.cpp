/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node *reverse(Node *head) {
        Node *curr=head;
        Node *prev=nullptr,*forward=nullptr;
        while(curr!=nullptr) {
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    Node *compute(Node *head)
    {
        Node *head0=reverse(head);
        Node *head1=head0;
        Node *head2 = head0->next;
        while(head2!=nullptr) {
            if(head2->data<head1->data) {
                head1->next=head2->next;
                head2=head2->next;
            }
            else {
                head2=head2->next;
                head1=head1->next;
            }
        }
        return reverse(head0);
     
    }
    
};
