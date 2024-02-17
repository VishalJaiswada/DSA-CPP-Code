#include<iostream>
#include<queue>
#include<stack>
using namespace std;
// Interleave first & second half of queue
void interLeaveQueue(queue<int>&q){
    int n=q.size();
    if(n==0 || n==1) return;
    int k=n/2;
    int count=0;
    queue<int>q2;
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        q2.push(temp);
        count++;

        if(count==k){
            break;
        }
    }

    while(!q.empty() && !q2.empty()){
        int first=q2.front();
        q2.pop();
        q.push(first);

        int second=q.front();
        q.pop();
        q.push(second);

    }

    // if odd case occurs
   
   if(n&1){
    int elem=q.front();
    q.pop();
    q.push(elem);
   }
}
int main(){
    queue<int>q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);

    interLeaveQueue(q);
    cout<<"After InterLeave the Queue: "<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
return 0;
}