#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* prev, *next;
};

struct Node* getNode(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = newNode->next = NULL;
    return newNode;
}

void printList(struct Node* head)
{
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

bool isChecked(Node *head)
{
    int lengthF=0;
    int lengthB=0;
    Node *temp=head;
    while(temp->next)
    {
        temp=temp->next;
        lengthF++;
    }
    
    while(temp->prev)
    {
        temp=temp->prev;
        lengthB++;
    }
    
    return lengthF==lengthB;
}

Node* sortedInsert(Node * head, int x);

int main()
{
    int t;
    cin>>t;
    while(t--){
        struct Node* new_node = NULL;
        int n, tmp, x;
        cin>>n;
        Node *head=NULL, *tail=NULL;
        cin>>x;
        head = getNode(x);
        tail = head;
        
        for(int i=0;i<n - 1;i++)
        {
            cin>>x;
            Node* temp=getNode(x);
            tail->next=temp;
            temp->prev= tail;
            tail = temp;
        }
        cin>>x;
        head=sortedInsert(head, x);
        
        if(isChecked(head))
        printList(head);
        else
        cout<<"The node has not been inserted correctly. Please fix the prev and next pointers";
        cout<<endl;
    }
    return 0;
}

Node* sortedInsert(Node * head, int x)
{
    Node* newnode = new Node();
    newnode->data = x;
    newnode->next = NULL;
    newnode->prev = NULL;
    
    if(head == NULL || head->data > x){
        newnode->next = head;
        if(head!=NULL){
            head->prev = newnode;
        }
        return newnode;
    }
    
    Node* curr = head;
    while(curr->next != NULL && newnode->data > curr->next->data){
        curr = curr->next;
    }
    newnode->next = curr->next;
    if(curr->next != NULL){
        curr->next->prev = newnode;
    }
    curr->next = newnode;
    newnode->prev = curr;
    return head;
};  
