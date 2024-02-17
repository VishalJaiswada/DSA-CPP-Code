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
        this->left = NULL;
        this->right = NULL;
    }
};
// find position of root node from inorder
int findPosition(int inorder[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (inorder[i] == element)
        {
            return i;
        }
    }
    return -1;
}
// build tree from inorder and preorder traversal
Node *buildTreeFromPreorderInorder(int inorder[], int preorder[], int size, int &preIndex, int inorderStart, int inorderEnd)
{
    // base case
    if (preIndex >= size || inorderStart > inorderEnd)
    {
        return NULL;
    }
    // stepA: find the root node from preorder
    int element = preorder[preIndex++];
    Node *root = new Node(element);
    int pos = findPosition(inorder, size, element); // find position of root from inorder

    // step B : root ->left solve
    root->left = buildTreeFromPreorderInorder(inorder, preorder, size, preIndex, inorderStart, pos - 1);

    // step C: root-> right solve
    root->right = buildTreeFromPreorderInorder(inorder, preorder, size, preIndex, pos + 1, inorderEnd);

    return root;
}
// Build tree from postorder and inorder
Node *buildTreeFromPostorderInorder(int inorder[], int postorder[], int size, int &postIndex, int inorderStart, int inorderEnd)
{
    // base case
    if (postIndex < 0 || inorderStart > inorderEnd)
    {
        return NULL;
    }
    // step A: find the root from postorder
    int element = postorder[postIndex];
    postIndex--;
    Node *root = new Node(element);
    int pos = findPosition(inorder, size, element);

    // step B: in postorder right calling first

    root->right = buildTreeFromPostorderInorder(inorder, postorder, size, postIndex, pos + 1, inorderEnd);

    // step C: root->left

    root->left = buildTreeFromPostorderInorder(inorder, postorder, size, postIndex, inorderStart, pos - 1);

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

int main()
{
    /*
     int inorder[]={40,20,50,10,60,30,70};
     int preorder[]={10,20,40,50,30,60,70};
     int size=7;
     int preIndex=0;
     int inorderStart=0;
     int inorderEnd=size-1;
     cout<<"Building Tree: "<<endl;
     Node* root=buildTreeFromPreorderInorder(inorder,preorder,size,preIndex,inorderStart,inorderEnd);

     cout<<endl<<"Printing Level Order Traversal: "<<endl;
     levelOrderTraversal(root);
    */
    int inorder[] = {40, 20, 10, 50, 30, 60};
    int postorder[] = {40, 20, 50, 60, 30, 10};
    int size = 6;
    int postIndex = size - 1;
    int inorderStart = 0;
    int inorderEnd = size - 1;
    cout << "Building Tree: " << endl;
    Node *root = buildTreeFromPostorderInorder(inorder, postorder, size, postIndex, inorderStart, inorderEnd);

    cout << endl
         << "Printing Level Order Traversal: " << endl;
    levelOrderTraversal(root);
    return 0;
}