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
void printLL(Node* first)
{
    Node* temp;
    temp=first;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{  
    
     Node* first=new Node(10);
     Node* second=new Node(20);
     Node* third=new Node(30);
     Node* fourth=new Node(40);
     Node* fifth=new Node(50);
     
     first->next=second;
     second->next=third;
     third->next=fourth;
     fourth->next=fifth;
     cout<<"Printing LL ka data"<<endl;
     printLL(first);
    return 0;
}