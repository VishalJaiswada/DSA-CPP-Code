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
// printing Preorder
void preOrderTraversal(Node* root){
    if(root==NULL) return ;
    
    // NLR
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

}
//inorder traversal
void inorderTraversal(Node* root){
    if(root==NULL) return ;
    //LNR
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}
//postorder traversal
void postOrderTraversal(Node* root){
    if(root==NULL) return;
    //LRN
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node* root=NULL;
    cout<<"Enter the data for Node: "<<endl;
    takeInput(root);
    cout<<"Printing Result of BST: "<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    cout<<"preOrder traversal: "<<endl;
    preOrderTraversal(root);
    cout<<endl;
    cout<<"Inorder traversal: "<<endl;
    inorderTraversal(root);
    cout<<endl;
    cout<<"Post Order traversal: "<<endl;
    postOrderTraversal(root);
    return 0;
}