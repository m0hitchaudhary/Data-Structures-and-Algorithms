#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

bool isCircular(struct Node* head);

int main()
{
  int T,i,n,l,k;
    cin>>T;
    while(T--){
        cin>>n>>k;
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
        if (k==1 && n >= 1)
              tail->next = head;
    printf("%d\n", isCircular(head));
    }
    return 0;
}

bool isCircular(Node *head)
{
   if(head == NULL){
       return 0;
   }
   Node* curr = head;
   while(1){
       if(curr->next == head){
           return 1;
       }else if(curr->next == NULL){
           return 0;
       }
       curr = curr->next;
   }
}
