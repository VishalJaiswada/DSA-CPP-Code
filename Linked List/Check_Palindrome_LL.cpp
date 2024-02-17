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
    while(temp!=NULL)
    {   
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
 
Node* reverseofLL(Node* head){
      if(head==NULL){
        return NULL;
      }
      Node* prev=NULL;
      Node* curr=head;
      Node* forward=curr->next;
      while(curr!=NULL)
      {
         forward=curr->next;
         curr->next=prev;
         prev=curr;
         curr=forward;
      }
    return prev;
}
bool isPalindrome(Node* &head){
    if(head==NULL)
    {
        return false;
    }
    if(head->next==NULL)
    {
        return true;
    }
    // step1: Find Middle of LL
     Node* slow=head;
     Node* fast=head->next;
     while(fast!=NULL){
                 fast=fast->next;
                 if(fast!=NULL){
                 fast=fast->next;
                 slow=slow->next;
                }
            }
    //  step2: Find the reverse of LL after Middle--> Here slow is middle

      Node* reverseAftermiddle= reverseofLL(slow->next);
      // join the reverse LL into Left Part
      slow->next=reverseAftermiddle;
      // step3: Compare both the LL 
      Node* temp1=head;
      Node* temp2=reverseAftermiddle;
      while(temp2!=NULL){
        if(temp1->data!=temp2->data){
            // not a palindrome
            return false;
        }
        else{ 
            // Both data are equal, and move forward
             temp1=temp1->next;
             temp2=temp2->next;
         }
      }
 return true;
}  
int main()
{  
     Node* head=NULL;
     Node* first=new Node(10);
     Node* second=new Node(20);
     Node* third=new Node(30);
     Node* fourth=new Node(40);
     Node* fifth=new Node(50);
     Node* sixth=new Node(40);
     Node* seventh=new Node(30);
     Node* eighth=new Node(20);
     Node* nineth=new Node(10);
     
     head=first;
     first->next=second;
    //  second->next=NULL;
     second->next=third;
     third->next=fourth;
     fourth->next=fifth;
     fifth->next=sixth;
     sixth->next=seventh;
     seventh->next=eighth;
     eighth->next=nineth;
     nineth->next=NULL;
    cout<<"Printing LL ka data"<<endl;
    printLL(first);
    // Checking  LL is palindrome or Not
     cout<<endl;
      if(isPalindrome(head))
      {
        cout<<"LL is Palindrome"<<endl;
      }
      else{
        cout<<"LL is not palindrome"<<endl;
      } 
    return 0;
}