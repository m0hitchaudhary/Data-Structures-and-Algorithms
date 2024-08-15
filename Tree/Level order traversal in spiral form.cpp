#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

vector<int> findSpiral(Node *root);

Node* buildTree(string str)
{
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    Node* root = newNode(stoi(ip[0]));

    queue<Node*> queue;
    queue.push(root);

    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        Node* currNode = queue.front();
        queue.pop();

        string currVal = ip[i];

        if(currVal != "N") {

            currNode->left = newNode(stoi(currVal));

            queue.push(currNode->left);
        }

        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        if(currVal != "N") {
 
            currNode->right = newNode(stoi(currVal));

            queue.push(currNode->right);
        }
        i++;
    }
    return root;
}

int main() {
    int t;
    string  tc;
    getline(cin,tc);
    t=stoi(tc);
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        vector<int> vec = findSpiral(root);
        for(int x : vec)
        cout<<x<<" ";
        cout << endl;
    }
    return 0;
}

vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int> result;
    if (root == NULL) return result;
    stack<Node*> s1;
    stack<Node*> s2;
    s2.push(root);
    int count = 0;
    while(!s2.empty() || !s1.empty()){
        if(count == 0 || count%2 == 0){
            int n = s2.size();
            for(int i=0; i<n; i++){
                Node* temp = s2.top();
                result.push_back(temp->data);
                if(temp->right){
                    s1.push(temp->right);
                }
                if(temp->left){
                    s1.push(temp->left);
                }
                s2.pop();
            }
        }
        if(count%2!=0){
            int n = s1.size();
            for(int i=0; i<n; i++){
                Node* temp = s1.top();
                result.push_back(temp->data);
                if(temp->left){
                    s2.push(temp->left);
                }
                if(temp->right){
                    s2.push(temp->right);
                }
                s1.pop();
            }
        }
        count++;
    }
}
