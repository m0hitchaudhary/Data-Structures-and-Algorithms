#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
        
};

void displayList(Node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

bool isSorted(Node * head)
{
    Node* curr = head;
    while(curr != NULL && curr->next != NULL){
        if(head->data < head->next->data){
            if(curr->data > curr->next->data){
                return 0;
            }
        }
        else if(head->data > head->next->data){
            if(curr->data < curr->next->data){
                return 0;
            }
        }
        curr = curr->next;
    }
    
    return 1;
}

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        cout<<isSorted(head) << endl;
    }
    return 0;
}
