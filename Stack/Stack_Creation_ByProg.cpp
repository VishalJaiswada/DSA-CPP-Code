#include<iostream>
using namespace std;
class Stack{
    public:
     int *arr;
     int top;
     int size;

     Stack(int size){
        arr= new int[size];
        this->size=size;
        top=-1;
     }
     // functions
     void push(int data){
        if(size-top > 1){
            // space available
            // insert
            top++;
            arr[top]=data;
        }
        else{
            // space not available
            cout<<"Stack Overflow"<<endl;
        }
     }

     void pop(){
         if(top==-1){
            // stack is empty
            cout<<"Stack Underflow,can't delete element! ";
         }
         else{
            // stack is not empty
            top--;
         }
     }

     int getTop(){
         if(top==-1){
            cout<<"There is not element in stack "<<endl;
         }
         else{
            return arr[top];
         }
     }

     int getSize(){
           return top+1;
     }

     bool isEmpty(){
         if(top==-1){
            return true;
         }
         else{
            return false;
         }
     }
};
int main(){
      Stack s(10);
      // insertion
      s.push(10);
      s.push(20);
      s.push(30);
      s.push(40);

     // printing 
     while(!s.isEmpty()){
         cout<<s.getTop()<<" ";
          s.pop();
     } 
     cout<<endl;
     cout<<"Size of Stack : "<<s.getSize()<<endl;
     s.pop();
    return 0; 
}