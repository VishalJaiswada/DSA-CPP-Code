#include<iostream>
#include<stack>
using namespace std;
 
void insertAtBottom(stack<int> &s,int target)
{
        // base case
    if (s.empty())
    {
        s.push(target);
        return;
    }

    int temp = s.top();
    s.pop();
    // recursion call
    insertAtBottom(s, target);

    // Backtracking
    s.push(temp);
}
 
void Reverse_Stack(stack<int>&s){
     // Base case
      if(s.empty()){
        return;
      }
     int target=s.top();
       s.pop();

     //recursion call,reverse stack
     Reverse_Stack(s);

     //insert at bottom target ko
     insertAtBottom(s,target);
}
int main(){
       stack<int>s;
       s.push(10);
       s.push(20);
       s.push(30);
       s.push(40);
       s.push(50);
       cout<<"After Reverse :"<<endl;
       Reverse_Stack(s);
       while(!s.empty()){
         cout<<s.top()<<" ";
         s.pop();
       }
       cout<<endl;
return 0;
}