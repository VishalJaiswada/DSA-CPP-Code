#include<iostream>
using namespace std;
class Node{
       public:
       int data;
       Node* next;
       Node(){
        this->data=0;
        this->next=NULL;
       }
       Node(int data){
        this->data=data;
        this->next=NULL;
       }
};
void insertAtHead(Node* &head,Node* &tail,int data)
{   
    // step1: check emty node
    Node* newNode=new Node(data);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
      //step2:
    else
      {
        newNode->next=head;
      }
      //step3:
      head=newNode;
}
int findLength(Node* &head)
{
    int len=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;
}
void printLL(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* find_middle(Node* head,Node* tail,int position)
{
    Node* newNode=head;
    int i=1;
    while(i<position)
    {
       newNode=newNode->next;
       i++;
    }
    
    return newNode;
}
int main(){
   Node * head=NULL;
   Node* tail=NULL;
//    insertAtHead(head,tail,60);
   insertAtHead(head,tail,50);
   insertAtHead(head,tail,40);
   insertAtHead(head,tail,30);
   insertAtHead(head,tail,20);
   insertAtHead(head,tail,10);
    
   cout<<"Length of Node is: "<<findLength(head)<<endl;
   printLL(head);
   cout<<endl;
   int len=findLength(head);
   cout<<"Middle of Linked List: "<<endl;
   if(len%2==0){
       Node* middle= find_middle(head,tail,len/2);
       cout<<middle->data;
   }
   else{
       Node* middle= find_middle(head,tail,len/2+1);
       cout<<middle->data;
   }
  return 0;
}