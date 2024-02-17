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
Node* reverseLL(Node* head)
{
    Node* prev=NULL;
    Node* curr=head;
    Node* farward=curr->next;
    while(curr!=NULL)
    { 
        farward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=farward;
    }
    return prev;
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
Node* Add_LL(Node* &head1,Node* &head2){
   //step1: reverse Both LL
    head1=reverseLL(head1);
    head2=reverseLL(head2);
   //step2: add both LL after reverse
    Node* ansHead=NULL;
    Node* ansTail=NULL;
    int carry=0;

     while(head1!=NULL && head2!=NULL){
         int sum=carry+head1->data +head2->data;
         int digit=sum%10;
         carry=sum/10;
        // create a new Node for the digit
        Node* newNode=new Node(digit);
        if(ansHead==NULL){
            ansHead=newNode;
            ansTail=newNode;
        }
        else{
            ansTail->next=newNode;
            ansTail=newNode;
        }
        head1=head1->next;
        head2=head2->next;
     }
    while(head1!=NULL){
         int sum=carry+head1->data;
         int digit=sum%10;
         carry=sum/10;
         Node* newNode=new Node(digit);
         ansTail->next=newNode;
         ansTail=newNode;
         head1=head1->next;
    }

      while(head2!=NULL){
         int sum=carry+head2->data;
         int digit=sum%10;
         carry=sum/10;
         Node* newNode=new Node(digit);
         ansTail->next=newNode;
         ansTail=newNode;
         head2=head2->next;
    }
     // carry ko alag se handle karte hai
     while(carry!=0){
       int sum=carry;
       int digit=sum%10;
       carry=sum/10;
        Node* newNode=new Node(digit);
         ansTail->next=newNode;
         ansTail=newNode;
     }
   //step3: reverse LL after add
   Node* ans= reverseLL(ansHead);
return ans;
}
int main()
{  
     Node* head1=NULL;
     Node* tail1=NULL;
     insertAtTail(head1,tail1,1);
     insertAtTail(head1,tail1,0);
     insertAtTail(head1,tail1,2);
     insertAtTail(head1,tail1,1);
     insertAtTail(head1,tail1,0);
     insertAtTail(head1,tail1,1);
     insertAtTail(head1,tail1,2);
     cout<<"1st LL ka data: "<<endl;
     printLL(head1);
     cout<<endl;
     Node* head2=NULL;
     Node* tail2=NULL;
     insertAtTail(head2,tail2,1);
     insertAtTail(head2,tail2,1);
     insertAtTail(head2,tail2,1);
     insertAtTail(head2,tail2,1);
     insertAtTail(head2,tail2,0);
    //  insertAtTail(head2,tail2,1);
    //  insertAtTail(head2,tail2,2);
     cout<<"2nd LL ka data: "<<endl;
     printLL(head2);
     cout<<endl;
     // after two LL adding
     cout<<"After adding two LL: "<<endl;
      Node* ans=Add_LL(head1,head2);
      printLL(ans);
   
    return 0;
}