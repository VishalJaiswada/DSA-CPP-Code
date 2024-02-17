#include<iostream>
using namespace std;
class CQueue{
      public:
      int size;
      int *arr;
      int front;
      int rear;

      CQueue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
      }

      void push(int data){
         //Queue Full
        if((front==0 && rear==size-1) || (rear==front-1)){
            cout<<"Q is full, can't insert "<<endl;
            return;
        }
         //Single element-> first element
        else if(front==-1){
            front=rear=0;
            arr[rear]=data;
        }
         //Circular Nature
        else if(rear==size-1 && front!=0){
            rear=0;
            arr[rear]=data;
        }
         // normal flow 
         else{
            rear++;
            arr[rear]=data;
         }

      }

      void pop(){
        //empty check
        if(front==-1){
            cout<<"Queue is empty"<<endl;
        }
        //single element
        else if(front==rear){
          arr[front]=-1;
          front=-1;
          rear=-1;
        }
        //circular nature
        else if(front==size-1){
            front=0;
        }
        // normal flow
        else{
            front++;
        }
      }
};
int main(){
    return 0;
}