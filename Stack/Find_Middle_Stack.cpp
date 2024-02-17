#include<iostream>
#include<stack>
using namespace std;
// Finding middle of stack 
void  Finding_Middle(stack<int>&s,int &TotalSize){
     if(s.size()==0){
        cout<<"stack is empty!"<<endl;
        return;
     }
    //Base case
    if(s.size()==TotalSize/2+1){
        cout<<"Middle Element of Stack: "<<s.top();
        return;
    }
    int temp=s.top();
    s.pop();
    // recursive call
    
    Finding_Middle(s,TotalSize);
    // BackTracking
    s.push(temp);
}
int main(){
     stack<int>s;
     s.push(10);
     s.push(20);
     s.push(30);
     s.push(40);
     s.push(50);
     s.push(60);
     s.push(70);

    int TotalSize=s.size();
    Finding_Middle(s,TotalSize);
    return 0;
}