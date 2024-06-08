#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

int getNthFromLast(struct Node* head, int n);

class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           if(head == NULL){
               return -1;
           }
           int len = 0;
           Node* temp = head;
           while(temp!=NULL){
               len++;
               temp = temp->next;
           }
           if(n > len) return -1;
           if(n == len) return head->data;
           Node* fast = head;
           Node* slow = head;
           for(int i=1; i<n; i++){
               fast = fast->next;
           }
           
           while(fast->next != NULL){
               slow = slow->next;
               fast = fast->next;
           }
           
           return slow->data;
    }
};

int main()
{
  int T,i,n,l,k;
    cin>>T;
    while(T--){
    struct Node *head = NULL,  *tail = NULL;
        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
    cout<<obj.getNthFromLast(head, k)<<endl;
    }
    return 0;
}
