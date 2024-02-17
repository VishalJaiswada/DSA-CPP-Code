#include<iostream>
using namespace std;
class Node{
     public:
      int data;
      Node* prev;
      Node* next;
      Node(){
           this->data=0;
           this->prev=NULL;
           this->next=NULL;
      }
      Node(int data)
      {
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
      }
      // calling the destructor to delete the node
      ~Node()
      {
        cout<<"Deleted Node is: "<<this->data<<endl;
      }
};
void printDoubly_LL(Node* &head)
{
   Node* temp=head;
   while(temp!=NULL)
   {
    cout<<temp->data<<" ";
    temp=temp->next;
   }
}
int getLength(Node* &head)
{  
    int len=0;
    Node*temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;
}
void insertAtHead(Node* &head,Node* &tail,int data)
{   
      // step1: create a new Node
    Node* newNode=new Node(data);
    if(head==NULL)
    {
        //LL is empty
        head=newNode;
        tail=newNode;
        return;
    }
     // step2: 
    newNode->next=head;
     //step3:
    head->prev=newNode;
     //step4:
    head=newNode;
}
void insertAtTail(Node* &head,Node* &tail,int data)
{
    //step1: Create the node
    Node* newNode=new Node(data);
    if(head==NULL)
    {  
        // LL is empty
        head=newNode;
        tail=newNode;
        return;
    }
    //step2:
    tail->next=newNode;
    //step3:
    newNode->prev=tail;
    //step4:
    tail=newNode;
    
}
void insertAtPosition(int position,Node* &head,Node* &tail,int data)
{    

    Node* newNode=new Node(data);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    if(position<=1){
        insertAtHead(head,tail,data);
        return;
    }
    int len = getLength(head);
    if(position>len)
    {
       insertAtTail(head,tail,data);
       return;
    }
    // insertion in middle
    //step1: finding the prev. and curr node
    Node* prevNode=head;
    int i=1;
    while(i<position-1)
    {
        prevNode=prevNode->next;
        i++;
    }
    Node* curr=prevNode->next;
    //step2:
    prevNode->next=newNode;
    //step3:
    newNode->prev=prevNode;
    // step4:
    newNode->next=curr;
   // step5:
    curr->prev=newNode;

}
void deleteAtPosition(int position,Node* &head,Node* &tail)
{  
    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
    }
    // If Only Single node is here -->
    if(head->next==NULL){
        Node* temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }
    int len=getLength(head);
    if(position>len)
    {
        cout<<"Please enter valid position to delete the node!"<<endl;
        return;
    }
    // we have to delete first node
    if(position==1)
    {
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return;
    }
    if(position==len)
    {
        Node* temp=tail;
        /* 
        tail->prev->next=NULL;
        tail->prev=NULL;
        delete temp;
        */
        tail=tail->prev;
        temp->prev=NULL;
        tail->next=NULL;
        delete temp;
        return;
    }
    //delete from middle the position
    Node* prevNode=head;
    int i=1;
    while(i<position-1)
    {
        prevNode=prevNode->next;
        i++;
    }
    Node* curr= prevNode->next;
    //step1:
    prevNode->next=curr->next;
    //step2:
    curr->next->prev=prevNode;
    //step3:
    curr->prev=NULL;
    curr->next=NULL;
    delete curr;
}
 
int main()
{  
       Node* first=new Node(10);
       Node* second=new Node(20);
       Node* third=new Node(30);
       Node* head= first;
       Node* tail= third;
       
       first->next=second;
       second->prev=first;

       second->next=third;
       third->prev=second;
       cout<<"Printing Doubly LL"<<endl; 
       printDoubly_LL(first);
       cout<<endl;
       cout<<"Length of Doubly LL is: "<<getLength(first)<<endl;
       cout<<endl;

       insertAtHead(head,tail,101);
       insertAtHead(head,tail,105);
       insertAtHead(head,tail,111);
       cout<<"Printing the Doubly LL after insert at head: "<<endl;
       printDoubly_LL(head);

         cout<<endl;

       insertAtTail(head,tail,501);
       insertAtTail(head,tail,505);
       insertAtTail(head,tail,511);
       cout<<"Printing the Doubly LL after insert at Tail: "<<endl;
       printDoubly_LL(head);
       cout<<endl;
       
       int position=6;
       cout<<"Printing the node insert at any position: "<<endl;
       insertAtPosition(position,head,tail,999);
       printDoubly_LL(head);
        cout<<endl;
       // delete the node at given position
       int pos=5;
       cout<<"After deleting the given position node: "<<endl;
       deleteAtPosition(pos,head,tail);
       printDoubly_LL(head);
    return 0;
}