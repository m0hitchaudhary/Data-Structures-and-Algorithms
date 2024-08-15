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

int main()
{
  int t;
  cin>>t;
  getchar();
  while (t--)
  {
     string inp;
     getline(cin, inp);
     struct Node* root = buildTree(inp);
     vector <int> res = postOrder(root);
     for (int i = 0; i < res.size (); i++)
        cout << res[i] << " ";
     cout << endl;
  }
  return 0;
}



//-------------------------------------------------------------------THERE ARE TWO METHODS TO SOLVE THIS PROBLEM, BOTH OF THEM ARE CODED BELOW---------------------------------------------------------------------




void traverse(Node* root, vector<int>& result){
    if(root == NULL) return;
    traverse(root->left, result);
    traverse(root->right, result);
    result.push_back(root->data);
}

vector <int> postOrder(Node* root)
{
  vector<int> result;
//   if(root == NULL){
//       return result;
//   }
  traverse(root, result);
//   vector<int> left = postOrder(root->left);
//   result.insert(result.end(), left.begin(), left.end());
//   vector<int> right = postOrder(root->right);
//   result.insert(result.end(), right.begin(), right.end());
//   result.push_back(root->data);
  
  return result;
}
