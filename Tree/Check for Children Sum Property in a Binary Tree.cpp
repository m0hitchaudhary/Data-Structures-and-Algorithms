#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

Node* buildTree(string str) {

    if (str.length() == 0 || str[0] == 'N') return NULL;

    vector<string> ip;
    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    Node* root = newNode(stoi(ip[0]));

    queue<Node*> queue;
    queue.push(root);

    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        Node* currNode = queue.front();
        queue.pop();

        string currVal = ip[i];

        if (currVal != "N") {

            currNode->left = newNode(stoi(currVal));

            queue.push(currNode->left);
        }
        i++;

        if (i >= ip.size()) break;
        currVal = ip[i];

        if (currVal != "N") {

            currNode->right = newNode(stoi(currVal));

            queue.push(currNode->right);
        }
        i++;
    }
    return root;
}

class Solution{
    public:
    bool checkSum(Node* root){
        if(root == NULL) return true;
        if(root->left==NULL && root->right == NULL) return true;
        if(root->left == NULL){
            return (root->data == root->right->data && checkSum(root->right));
        }
        if(root->right == NULL){
            return (root->data == root->left->data && checkSum(root->left));
        }
        return (root->data == root->left->data + root->right->data && checkSum(root->left)
        && checkSum(root->right));
    }
    
    int isSumProperty(Node *root)
    {
     bool  result = checkSum(root);
     if(result == true) return 1;
     return 0;
    }
};
  
int main() {
   
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);
        Solution ob;
        cout << ob.isSumProperty(root) << endl;
    }
    return 0;
}
