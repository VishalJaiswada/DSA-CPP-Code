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
// Remove Duplicates for sorted linked list
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
int main()
{  
     Node* head=NULL;
     Node* first=new Node(10);
     Node* second=new Node(20);
     Node* third=new Node(20);
     Node* fourth=new Node(30);
     Node* fifth=new Node(40);
     Node* sixth=new Node(40);
     Node* seventh=new Node(50);
     Node* eighth=new Node(60);
     Node* nineth=new Node(60);
     
     head=first;
     first->next=second;
     second->next=NULL;
     second->next=third;
     third->next=fourth;
     fourth->next=fifth;
     fifth->next=sixth;
     sixth->next=seventh;
     seventh->next=eighth;
     eighth->next=nineth;
     nineth->next=NULL;
     cout<<"Printing LL ka data"<<endl;
     printLL(head);
     cout<<endl;
     cout<<"LL after Duplicate Removal: "<<endl;
     remove_Duplicate_LL(head);
     printLL(head);
    return 0;
}