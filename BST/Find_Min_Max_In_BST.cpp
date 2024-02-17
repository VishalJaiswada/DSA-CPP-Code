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
// find Miximum value in BST
int findMaxValueBST(Node* root){
   
    Node* temp=root;
    if(temp==NULL){
        return -1;
    }
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->data;
}
// find Minimum value in BST
int findMinValueBST(Node* root){
   
    Node* temp=root;
    if(temp==NULL){
        return -1;
    }
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
}
int main(){
    Node* root=NULL;
    cout<<"Enter the data for Node: "<<endl;
    takeInput(root);
    cout<<"Printing Result of BST: "<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    
    cout<<" minimum Value in BST: "<<findMinValueBST(root)<<endl;
    cout<<"Maximum Value in BST: "<<findMaxValueBST(root)<<endl;
    return 0;
}