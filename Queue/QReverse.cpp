#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void QreverseByStack(queue<int>&q){
    stack<int>s;

    while(!q.empty()){
        int temp=q.front();
        q.pop();
       
       // push in stack
       s.push(temp);
    }

    // pop from stack and push into queue
    while(!s.empty()){
        int temp=s.top();
        s.pop();

        // push i n queue
        q.push(temp);
    }
}
// reverse by recursion
void QreverseByRecursion(queue<int>&q){
    // Base case
    if(q.empty()) return;

    // Step1:
     int temp=q.front();
      q.pop();
    //Step2: recursion call
     QreverseByRecursion(q);

     // step3: Backtracking jaisa game hai yaha par
     q.push(temp);
}
int main(){
    queue<int>q;
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    // QreverseByStack(q);
    QreverseByRecursion(q);
    cout<<"printing after reverse in queue by recursion"<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
return 0;
}