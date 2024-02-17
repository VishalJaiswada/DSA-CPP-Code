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
void Sort_012_LL(Node* &head){
     Node* curr=head;
     if(head==NULL){
        return;
     }
     int count0=0,count1=0,count2=0;
     while(curr!=NULL){
        if(curr->data==0){
            count0++;
        }
        if(curr->data==1){
            count1++;
        }
        if(curr->data==2){
            count2++;
        }
        curr=curr->next;
     }
     curr=head;
     int i=0;
     while(i<count0 && curr!=NULL){
             curr->data=0;
             curr=curr->next;
             i++;
     }
     int j=0;
     while(j<count1 && curr!=NULL){
             curr->data=1;
             curr=curr->next;
             j++;
     }
     int k=0;
     while(k<count2 && curr!=NULL){
             curr->data=2;
             curr=curr->next;
             k++;
     }
}
Node* sort012_LL(Node* &head){
    if(head==NULL){
        // LL is empty
        return NULL;
    }
    if(head->next==NULL){
        // only one node
        return head;
    }
    // create dummy node
    Node* zeroHead=new Node(-101);
    Node* zeroTail=zeroHead;

    Node* oneHead=new Node(-101);
    Node* oneTail=oneHead;

    Node* twoHead=new Node(-101);
    Node* twoTail=twoHead;

    // separate LL for 0,1,2 data
    Node* curr=head;
    while(curr!=NULL){
        
        if(curr->data==0){
           Node* temp=curr;
           curr=curr->next;
           temp->next=NULL;
           
           //append the zeo node in zeroHead LL
           zeroTail->next=temp;
           zeroTail=temp;
        }

        if(curr->data==1){
            // Separate the oneHead wali data
           Node* temp=curr;
           curr=curr->next;
           temp->next=NULL;

           //append the one node in oneHead LL
           oneTail->next=temp;
           oneTail=temp;
        }

        if(curr->data==2){
           Node* temp=curr;
           curr=curr->next;
           temp->next=NULL;

           //append the one node in oneHead LL
           twoTail->next=temp;
           twoTail=temp;
        }
    }
    // join the 0,1,2 wali LL

    // remove dummy node of oneHead
    Node* temp=oneHead;
    oneHead=oneHead->next;
    temp->next=NULL;
    delete temp;

    // remove dummy node of twoHead
     temp=twoHead;
    twoHead=twoHead->next;
    temp->next=NULL;
    delete temp;

    // Now Join the 0,1,2 after remove oneHead and twoHead ka dummy node
    if(oneHead!=NULL){
        //one wali LL is nono empty
        zeroTail->next=oneHead;
        if(twoHead!=NULL){
            oneTail->next=twoHead;
        }
    }
    else{
        // one wali LL is empty
         if(twoHead!=NULL){
            zeroTail->next=twoHead;
         }
    }
    // remove zerohead dummy node
    temp=zeroHead;
    zeroHead=zeroHead->next;
    temp->next=NULL;
    delete temp;

    // return  head of the modified ll
return zeroHead;
}
int main()
{  
     Node* head=NULL;
     Node* tail=NULL;
    //  insertAtTail(head,tail,1);
    //  insertAtTail(head,tail,0);
    //  insertAtTail(head,tail,2);
    //  insertAtTail(head,tail,1);
    //  insertAtTail(head,tail,0);
    //  insertAtTail(head,tail,1);
    //  insertAtTail(head,tail,2);
    Node* first=new Node(1);
    Node* second=new Node(1);
    Node* third=new Node(1);
    Node* fourth=new Node(0);
    Node* fifth=new Node(1);
    Node* sixth=new Node(0);
    Node* seventh=new Node(2);
    head=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
     cout<<"Printing LL ka data"<<endl;
     printLL(head);
     cout<<endl;
     cout<<"LL after Sorting: "<<endl;
    //  Sort_012_LL(head);
    //  printLL(head); 
    
    Node * temp= sort012_LL(first);
    printLL(temp);
    return 0;
}