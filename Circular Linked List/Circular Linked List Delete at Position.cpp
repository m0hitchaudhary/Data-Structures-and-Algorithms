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

Node *newNode(int data)
{
    Node *temp=new Node(data);
    
    return temp;
}

void displayList(Node *head)
{
    Node *temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<" ";
}

Node * deleteAtPosition(Node *head,int pos)
{
    Node* tail = head;
    while(tail->next != head){
        tail = tail->next;
    }
    if(pos ==  1){
        head = head->next;
        tail->next = head;
        return head;
    }
    Node* curr = head;
    while(pos > 2){
        curr = curr->next;
        pos -= 1;
    }
    curr->next = curr->next->next;
    
    return head;
}

void makeCircular(Node * head)
{
    Node * temp=head;
    
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=head;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Node *head=NULL, *tail = NULL;
        int x;
        cin >> x;
        head = new Node(x);
        tail = head;
        for(int i=0;i<n-1;i++)
        {
            cin>>x;
            tail -> next = new Node(x);
            tail = tail -> next;
        }   
        
        int pos;
        cin>>pos;
        makeCircular(head);

        head = deleteAtPosition(head, pos);
        displayList(head);
        cout<<endl;
    }
    return 0;
}
