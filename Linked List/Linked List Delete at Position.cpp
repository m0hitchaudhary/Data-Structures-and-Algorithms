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

Node * deleteAtPosition(Node *head,int pos)
{
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        delete(temp);
        return head;
    }
    
    int idx = 1;
    Node* curr = head;
    while(idx != pos-1 && curr != NULL){
        curr = curr->next;
        idx++;
    }
    Node* temp = curr->next;
    curr->next = temp->next;
    delete(temp);
    return head;
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
        int pos;
        cin>>pos;
        head=deleteAtPosition(head,pos);
        displayList(head);
        cout<<endl;
    }
    return 0;
}
