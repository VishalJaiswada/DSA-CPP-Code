#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node()
    {
        // constructor of node
        this->data=0;
        this->next=NULL;
    }
    Node (int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void printLL(Node* &head)
{
    Node* temp;
    temp=head;
    Node* tail=head;
    while(tail->next!=head)
    {   
        
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    cout<<tail->data<<" ";
}
bool isCircular(Node* &head)
{
    if(head==NULL)
    {
        return false;
    }
    if(head->next==NULL)
    {
        return false;
    }
    Node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        if(temp==head){
            return true;
        }
    }
    return false;
}
int main()
{  
     Node* head=NULL;
     Node* first=new Node(10);
     Node* second=new Node(20);
     Node* third=new Node(30);
     Node* fourth=new Node(40);
     Node* fifth=new Node(50);
      Node* sixth=new Node(60);
     head=first;
     first->next=second;
     second->next=third;
     third->next=fourth;
     fourth->next=fifth;
     fifth->next=sixth;
     sixth->next=head;
     cout<<"Printing LL ka data"<<endl;
     printLL(head);
     // Checking Circular LL or Not
     cout<<endl;
      if(isCircular(head))
      {
        cout<<"It is Circular LL"<<endl;
      }
      else{
        cout<<"It is not circular LL"<<endl;
      }
     return 0;
}