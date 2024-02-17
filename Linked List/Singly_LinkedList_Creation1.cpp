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
        Node(int data)
        {
            this->data=data;
            this->next=NULL;
        }
        ~Node(){
            cout<<"deleted node: "<<this->data<<endl;
        }
};
void print(Node* head)
{
    Node *temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void insertAtTail(Node* &head,Node* &tail,int data)
{
    //step1:create a node
   Node* newNode=new Node(data);
   // check emty node
   if(head==NULL || tail==NULL)
      {
          head=newNode;
          tail=newNode;
          return;
      }
    //step2: connect with tail node
    else
    {
        tail->next=newNode;
    }
    //step3: update tail n 
    tail=newNode;
}
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
void insertAtPosition(int position,Node* &head,Node* &tail,int data)
{
   //step1: create the new node
    Node* newNode=new Node(data);
    //step2: for empty head or tail
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    //if position is 0.
    if(position==0)
    {
        insertAtHead(head,tail,data);
        return;
    }
    // at the end of node insert new node
    int len=findLength(head);
    if(position>=len)
    {
        insertAtTail(head,tail,data);
        return;
    }
    //step3: create the prev. and find the position of previous node
    Node* prev=head;
    int i=1;
    while(i<position)
    {
        prev=prev->next;
        i++;
    }
    // step4: find the current node
    Node* curr=prev->next;
    //step5: insert the new node at given position
    newNode->next=curr;
    prev->next=newNode; 
}
void deleteNode(int position,Node* &head,Node* &tail)
{
    if(position==0)
    {  
        Node* temp;
        temp=head;
        head=head->next;
        delete temp; // call the destructor delete temp or only write free(temp);
        return;
    }
    int len=findLength(head);
    if(len==position)
    {
        //step1: find the prev. node 
        int i=1;
          Node* prev=head;
        while(i<position-1){
           
            prev=prev->next;
            i++;
        }
        //step2: delete the end node
        Node* temp=tail;
        prev->next=NULL;
        tail=prev;
        delete temp;
        return;
    }
    // deleting the middle node
    int i=1;
    Node* prev=head;
    // step1: find prev node
    while(i<position-1)
    {
        prev=prev->next;
        i++;
    }
    // step3:
    Node* curr=prev->next;
    //step4:
    prev->next=curr->next;
    //step5:
    curr->next=NULL;
    //step6:
    delete curr;
}
Node* reverseNode(Node* head)
{
    Node* prev=NULL;
    Node* curr=head;
     
    while(curr!=NULL)
    { 
        Node* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
       
    }
    return prev;
}
int main()
{    
    Node* head= NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,70);
    insertAtHead(head,tail,90);
    cout<<"Printing data insert at head"<<endl;
    print(head);
    cout<<endl;
     
    insertAtTail(head,tail,7);
    insertAtTail(head,tail,5);
    insertAtTail(head,tail,3);
    insertAtTail(head,tail,1);
    cout<<"Printing data insert at tail"<<endl;
    print(head);
    cout<<endl;
    int position=7;
 /*
    cout<<"After Inserting the data at given position"<<endl;
    insertAtPosition(position,head,tail,101);
    print(head);
    cout<<endl;
    cout<<"head ka data: "<<head->data<<endl;
    cout<<"tail ka data: "<<tail->data<<endl;
*/
     deleteNode(position,head,tail);
     cout<<"Print after deleting the node: "<<endl;
     print(head);
     cout<<endl;
     cout<<"Printing the reverse of Nodes: "<<endl;
     Node* rev= reverseNode(head);
     print(rev);
    return 0;
}