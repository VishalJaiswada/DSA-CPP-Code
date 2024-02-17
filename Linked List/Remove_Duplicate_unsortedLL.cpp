#include<iostream>
#include<vector>
#include<algorithm>
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
// Remove Duplicates for Unsorted linked list in 0(nlogn)--> sort then remove duplicates

void printLL(Node* &head)
{
    Node* temp;
    temp=head;
    while(temp!=NULL)
    {   
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
void sort(Node* &head){
    vector<int>elements;
    Node* curr=head;
    while(curr!=NULL){
        elements.push_back(curr->data);
        curr=curr->next;
    }
    sort(elements.begin(),elements.end());
    curr=head;
    for(auto element:elements){
        curr->data=element;
        curr=curr->next;
    }

}
void remove_Duplicate_LL(Node* &head)
{
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return;
    }
    Node* curr=head;
    while(curr!=NULL)
    {   
        //for equal case
        if((curr->next!=NULL) && (curr->data==curr->next->data)){
            Node* temp=curr->next;
            curr->next=curr->next->next;
            temp->next=NULL;
            delete temp;
        }
        else{
            curr=curr->next;
        }
    }

}
void insertAtTail(Node* &head,Node* &tail,int data){
    Node* newNode=new Node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
   else{
       tail->next=newNode;
   }
  
  tail=newNode;
    
}
int main()
{  
     Node* head=NULL;
     Node* tail=NULL;
     insertAtTail(head,tail,10);
     insertAtTail(head,tail,20);
     insertAtTail(head,tail,30);
     insertAtTail(head,tail,20);
     insertAtTail(head,tail,10);
     insertAtTail(head,tail,40);
     insertAtTail(head,tail,30);
     cout<<"Printing LL ka data"<<endl;
     printLL(head);
     cout<<endl;
     cout<<"LL after Duplicate Removal from Unsorted LL: "<<endl;
     sort(head);
     remove_Duplicate_LL(head);
     printLL(head);
    return 0;
}