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
 
//Deletion In BST
Node* deleteInBST(Node* root,int target){
    //base case
    if(root==NULL)
      return root;
    
    // root->data ==target
    if(root->data==target){
         // there are 4 cases-->
         //case 1:
         if(root->left==NULL && root->right==NULL){
            return NULL;
         }
         //case 2:
         else if(root->left!=NULL && root->right==NULL){
            Node * child=root->left;
            delete root;
            return child;
         }
         //case 3:
         else if(root->left==NULL && root->right!=NULL){
            Node* child=root->right;
            delete root;
            return child;
         }
         // case 4:
         else{
             // root->left!=NULL && root->right!=NULL
             int inorderpre=findMaxValueBST(root->left); // inorder predecessor
             root->data = inorderpre;
             root->left= deleteInBST(root->left,inorderpre);
             return root;
         }
    }
    //root->data < target
    else if(root->data < target){
       root->right= deleteInBST(root->right,target);
    }
    //root->data > target
    else{
       root->left= deleteInBST(root->left,target);
    }
 return root;
}
int main(){
    Node* root=NULL;
    cout<<"Enter the data for Node: "<<endl;
    takeInput(root);
    cout<<"Printing Result of BST: "<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    
    Node *root11=deleteInBST(root,100);
    cout<<"Printing Result after deletion: "<<endl;
    levelOrderTraversal(root11);
    //100 50 150 40 60 175 110 -1
    return 0;
}