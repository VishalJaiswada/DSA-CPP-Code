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
bool isLoopPresent(Node* &head)
{
    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
        return false;
    }  
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
           fast=fast->next;
           slow=slow->next;
        }
        if(fast==slow){
            return true;
        }
    } 
    return false;
}
Node* startPoint_Loop(Node* head){
     if(head==NULL){
        // there is empty LL
        return NULL;
     }
     Node* slow=head;
     Node* fast=head;
     while(fast!=NULL)
     {
        fast=fast->next;
        // step1:find fast==slow
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast)
        { 
            //step2: if slow==fast  then slow=head
            slow=head; 
            break;
        }
     }
    while(slow!=fast){
              slow=slow->next;
              fast=fast->next;
              }
      
   return slow;
}
void Remove_LoopFromLL(Node* head)
{
     if(head==NULL){
        // there is empty LL
        return ;
     }
     Node* slow=head;
     Node* fast=head;
     while(fast!=NULL)
     {
        fast=fast->next;
        // step1:find fast==slow
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast)
        { 
            //step2: if slow==fast  then slow=head
            slow=head; 
            break;
        }
     }
     Node* prev=fast;
    while(slow!=fast){
              prev=fast;
              slow=slow->next;
              fast=fast->next;
              }
      
     prev->next=NULL;
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
     Node* seventh=new Node(70);
     Node* eighth=new Node(80);
     Node* nineth=new Node(90);
     head=first;
     first->next=second;
     second->next=third;
     third->next=fourth;
     fourth->next=fifth;
     fifth->next=sixth;
     sixth->next=seventh;
     seventh->next=eighth;
     eighth->next=nineth;
     nineth->next=fourth;
    // cout<<"Printing LL ka data"<<endl;
    // printLL(head);
    // Checking Loop present in LL or Not
     cout<<endl;
      if(isLoopPresent(head))
      {
        cout<<"Loop is Present in LL"<<endl;
      }
      else{
        cout<<"Loop is not present in LL"<<endl;
      }
      cout<<endl;
      cout<<"Start Point of Loop is: "<<startPoint_Loop(head)->data<<endl;
      Remove_LoopFromLL(head);
      cout<<"is loop present: "<<isLoopPresent(head)<<endl;
     return 0;
}