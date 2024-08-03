#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x)
  {
      data = x;
      next = prev = NULL;
  }
};

void addNode(Node *head, int pos, int data);

Node *insert(Node *head, int x)
{
    if (head == NULL)
    {
        return new Node(x);
    }
    Node *n = new Node(x);
    head->next = n;
    n->prev = head;
    head = n;
    return head;
}

void printList(Node *head)
{
  Node *temp=head;
  if (temp != NULL) {
    int ct1=0,ct2=0;
    while (temp->next!=NULL)
    {
      temp=temp->next,ct1++;
    }
    while (temp->prev!=NULL)
    {
     temp = temp->prev,ct2++;
     if(ct1!=ct2){
         cout<<-1<<"\n";
         return;
     }
    }
  }
  while (temp != NULL)
  {
      printf("%d ",temp->data);
      temp=temp->next;
  }
  
  cout << endl;
}

int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
  Node *head = NULL; 
  Node *root = NULL;
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
     int x;
     scanf("%d",&x);
     head = insert(head, x);
     if(root==NULL) root = head;
  }     
  head = root;
  int pos,data;
  cin>>pos>>data;
  addNode(head, pos, data);
  printList(head);
  }
  return 0;
}

void addNode(Node *head, int pos, int data)
{
  if(head == NULL){
      return;
  }
   Node* newnode = new Node(data);
   while(pos > 0){
       head = head->next;
       pos -= 1;
   }
   Node* temp = head->next;
   head->next = newnode;
   newnode->prev = head;
   newnode->next = temp;
   if(temp != NULL){
       temp->prev = newnode;
   }
}
