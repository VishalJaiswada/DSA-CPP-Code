#include<iostream>
#include<queue>
#include<map>
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
// printing Top view of Binary Tree
void printTopView(Node* root){
      if(root==NULL)
           return;
      
      //Create a map for storing HD and TopNode->data
      map<int,int>topNode;

      // Level Order
      // We will store a pair consisting of Node and Horizontal Distance
      queue<pair<Node*,int>>q;

      q.push(make_pair(root,0));

      while(!q.empty()){
         pair<Node*,int>temp=q.front();
         q.pop();

         Node* frontNode= temp.first;
         int hd=temp.second;

         //jo bhi horizontal distance aaya hai, check if answer for that hd already exist or not
         if(topNode.find(hd)==topNode.end()){
              // create entry
              topNode[hd]=frontNode->data;
         }

         if(frontNode->left){
            q.push(make_pair(frontNode->left,hd-1));
         }
         if(frontNode->right){
            q.push(make_pair(frontNode->right,hd+1));
         }
      }
    // ab aapka answer store hua hoga aapke map me
    cout<<"Printig the answer: "<<endl;
    for(auto i: topNode){
        cout<<i.first<<"->"<<i.second<<endl;
    }
}

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
// printing Bottom view of Binary Tree
void printBottomView(Node* root){
      if(root==NULL)
           return;
      
      //Create a map for storing HD and TopNode->data
      map<int,int>topNode;

      // Level Order
      // We will store a pair consisting of Node and Horizontal Distance
      queue<pair<Node*,int>>q;

      q.push(make_pair(root,0));

      while(!q.empty()){
         pair<Node*,int>temp=q.front();
         q.pop();

         Node* frontNode= temp.first;
         int hd=temp.second;

         //jo bhi horizontal distance aaya hai, vo key hai aur frontNode->data value ha map ka
              // create entry
              topNode[hd]=frontNode->data;
         
         if(frontNode->left){
            q.push(make_pair(frontNode->left,hd-1));
         }
         if(frontNode->right){
            q.push(make_pair(frontNode->right,hd+1));
         }
      }
    // ab aapka answer store hua hoga aapke map me
    cout<<"Printing the answer: "<<endl;
    for(auto i: topNode){
        cout<<i.first<<"->"<<i.second<<endl;
    }
}
// Left view of BT
void printLeftView(Node* root,vector<int>&ans,int level){
    // base case
    if(root == NULL){
        return;
    }
    
    if(level==ans.size()){
        ans.push_back(root->data); 
    }

    // left traverse
    printLeftView(root->left,ans,level+1);
    // right traverse
    printLeftView(root->right,ans,level+1);
}
void printRightView(Node* root,vector<int>&ans,int level){
    if(root==NULL){
        return ;
    }

    if(level==ans.size()){
        ans.push_back(root->data);
    }
    // root->right
    printRightView(root->right,ans,level+1);
    // root->left
    printRightView(root->left,ans,level+1);

   
}

// boundary Traversal 
void printLeftBoundary(Node* root){
    // base case
    // if root is null then go back
    if(root==NULL) return;
    // if root is leaf node ,then go back
    if(root->left==NULL && root->right==NULL)
      return ;

    // steps like NLR: root ,left,right
    cout<<root->data<<" ";
   if(root->left){
      printLeftBoundary(root->left);
   }
   else{
    printLeftBoundary(root->right);
   }

}
void printLeafBoundary(Node* root){
    // base case
    if(root==NULL) return ; 
    if(root->left==NULL && root->right==NULL){
        cout<<root->data<<" ";
    }

    // recursively
    printLeafBoundary(root->left);
    printLeafBoundary(root->right); 
}

void printRightBoundary(Node* root){
    // base case
     if(root==NULL) return ;
     if(root->left==NULL && root->right==NULL)
        return ;
     
     // call recursively
     if(root->right){
       printRightBoundary(root->right);
     }
     else{
       printRightBoundary(root->left);
     }

     // return karte samay print kar dena
     cout<<root->data<<" ";
}

void boundaryTraversal(Node* root){
     if(root==NULL) return ;

     // print root-> data to remove duplicacy of nodes
     cout<<root->data<<" ";

     //step A: left Nodes
    printLeftBoundary(root->left);
     //step B: Leaf nodes
    printLeafBoundary(root);
     //step C: right Nodes
    printRightBoundary(root->right);
}
int main(){
    Node* root = buildTree();

   /*
    cout<<"printing top view of bt: "<<endl;
    printTopView(root);
  */

  /*
   cout<<"printing Bottom view of bt: "<<endl;
    printBottomView(root);
  */

   /*
    cout<<"printing left view of BT: "<<endl;
    int level=0;
    vector<int>ans;
    printLeftView(root,ans,level);
    for(auto i:ans){
        cout<<i<<" ";
    }
    */

   /*
    cout<<"printing right view of BT: "<<endl;
    int level=0;
    vector<int>ans;
    printRightView(root,ans,level);
    for(auto i:ans){
        cout<<i<<" ";
    }
    */
    cout<<"printing Boundary traversal of BT: "<<endl;
    boundaryTraversal(root); 
    return 0;
}