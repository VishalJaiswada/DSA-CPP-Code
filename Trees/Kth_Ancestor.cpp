#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// build tree
Node* buildTree(){
    int data;
    cout << "Enter the data: " << endl;
    cin >> data;

    // Base Case
    if (data == -1)
    {
        return NULL;
    }
    // Call the recursively
    // step A,B,C

    Node *root = new Node(data);

    cout << "Enter data for left part of " << data << " node " << endl;
    root->left = buildTree();

    cout << "Enter data for right part of " << data << " node " << endl;
    root->right = buildTree();

    return root;
}
//kth Ancestor
bool kthAncestor(Node *root, int &k, int p)
{
    // base case
    if (root == NULL)
        return false;

    if (root->data == p)
        return true;

    bool leftAns = kthAncestor(root->left, k, p);
    bool rightAns = kthAncestor(root->right, k, p);

    // wapas aana hai ab
    // check left ya right me ans mila ya nahi
    if (leftAns || rightAns)
        k--;
    if (k == 0)
    {
      cout << "kth Ancestor is: " << root->data << endl;
       k=-1;
    }

return leftAns || rightAns;
}
 
int main()
{
    Node* root =NULL;
    root=buildTree();

    int p=4;
    int k=1;

    bool found=kthAncestor(root,k,p);
    return 0;
}