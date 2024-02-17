#include <iostream>
#include <queue>
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
// Building Tree
Node *buildTree()
{
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
// Level Order Traversal
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    // initially
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        // step A
        Node *temp = q.front();
        // step B
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            // step C
            cout << temp->data << " ";
            // step D
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
// inorder Traversal
void inorderTraversal(Node *root)
{
    if (root == NULL)
        return;

    // LNR
    inorderTraversal(root->left);  // l
    cout << root->data << " ";     // N
    inorderTraversal(root->right); // R
}

// pre-order Traversal
void preorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // NLR
    cout << root->data << " ";      // N
    preorderTraversal(root->left);  // L
    preorderTraversal(root->right); // R
}

// post-order traversal
void postorderTraversal(Node *root)
{
    if (root == NULL)
        return;

    // LRN
    postorderTraversal(root->left);  // L
    postorderTraversal(root->right); // R
    cout << root->data << " ";       // N
}

// Maximum Height of Binary Tree
int HeightBT(Node* root){
    //Base Case, Solving by recursion
    if(root==NULL)
     return 0;
    
    int leftHeight=HeightBT(root->left);
    int rightHeight=HeightBT(root->right);
    int ans=max(leftHeight,rightHeight) + 1;

return ans;
}

// Diameter of a Binary Tree, Diameter means longest path b/ two node
int diameterOfBinaryTree(Node* root) {
        if(root==nullptr)
        return 0;

        int opt1=diameterOfBinaryTree(root->left);
        int opt2=diameterOfBinaryTree(root->right);
        int opt3=HeightBT(root->left)+HeightBT(root->right);
        int ans=max(opt1,max(opt2,opt3));
      
    return ans;
 }

int main()
{
    Node *root = NULL;

    root = buildTree();

    levelOrderTraversal(root);
    cout << endl;
    inorderTraversal(root);
    cout << endl;
    preorderTraversal(root);
    cout << endl;
    postorderTraversal(root);
    cout<<endl;
    cout<<"Height of BT: "<<HeightBT(root)<<endl;
    
    cout<<"Diameter of BT: "<<diameterOfBinaryTree(root)<<endl;
    return 0;
}