#include<iostream>
#include<queue>
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
Node* insertIntoBST(Node* root,int data){
      if(root==NULL){
          // this is the first node we have to create
          root=new Node(data);
          return root;
      }

      // No first Node Come

      if(data < root->data){
        //insert in left
        root->left=insertIntoBST(root->left,data);
      }
      else{
            //insert into right
            root->right=insertIntoBST(root->right,data);
      }
      return root;
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    
    while(data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;
    }

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
 // Seach in BST, Assuming only unique value at node
bool findNodeInBST(Node* root, int target){
    // base case
    if(root==NULL){
        return false;
    }

    if(root->data==target){
        return true;
    }

    if(root->data < target){
        // right me search karo
        return findNodeInBST(root->right,target);
    }
    else{
        // left me search karo
        return findNodeInBST(root->left,target);
    }

}
int main(){
    Node* root=NULL;
    cout<<"Enter the data for Node: "<<endl;
    takeInput(root);
    cout<<"Printing Result of BST: "<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    
    bool ans=findNodeInBST(root,15);
    cout<<"present or not :"<<ans<<endl;
    return 0;
}