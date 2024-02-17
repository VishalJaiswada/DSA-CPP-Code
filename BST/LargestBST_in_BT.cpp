#include<iostream>
#include<queue>
#include<limits.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};
class NodeData{
    public:
    int size;
    int minVal;
    int maxVal;
    bool validBST;

    NodeData(int size,int max,int min,bool valid){
        this->size=size;
        this->minVal=min;
        this->maxVal=max;
        this->validBST=valid;
    }
};

//Building BT
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
//Largest BST(size) in a Binary Tree
NodeData* findLargestBST(Node* root, int &ans){
    // base case
    if (root == NULL){
        NodeData* temp = new NodeData(0, INT32_MIN, INT32_MAX, true);
        return temp;
    }

    NodeData* leftKaAns = findLargestBST(root->left, ans);
    NodeData* rightKaAns = findLargestBST(root->right, ans);

    // Checking starts here
    NodeData* currNodeKaAns=new NodeData(0, INT32_MIN, INT32_MAX, true);

    currNodeKaAns->size = leftKaAns->size + rightKaAns->size + 1;
    currNodeKaAns->maxVal = max(root->data, leftKaAns->maxVal);
    currNodeKaAns->minVal = min(root->data, rightKaAns->minVal);

    if (leftKaAns->validBST && rightKaAns->validBST && (root->data > leftKaAns->maxVal && root->data < rightKaAns->minVal)){
        currNodeKaAns->validBST = true;
    }
    else {
        currNodeKaAns->validBST = false;
    }

    if (currNodeKaAns->validBST){
        ans = max(ans, currNodeKaAns->size);
    }

    return currNodeKaAns;
}

int main(){
      Node* root=NULL;
      cout<<"Enter the data for Node: "<<endl;
      root=buildTree();
     cout<<"Printing the tree: "<<endl;
      levelOrderTraversal(root);
      
      int ans=0;
      findLargestBST(root,ans);
 
      cout<<" Largest BST ka size: "<< ans <<endl; 

    return 0;
}