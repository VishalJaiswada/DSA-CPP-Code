#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverseKthElem_Recursion(queue<int>&q,int k){
    //Base case
 
    if(k==0)
    return;
    // Step1: 
    int temp=q.front();
    q.pop();
    // Step2: recursion call
    reverseKthElem_Recursion(q,--k);
    //step3: Backtracking hoga ab yaha par
    q.push(temp);

}
void reverseKth(queue<int>&q,int k){
    stack<int>s;
    int n=q.size();
    int count=0;

    if(k<=0 || k>n){
       return;
    }
    while(!q.empty()){

       int temp=q.front();
       q.pop();
       s.push(temp);
       count++;

         if(count==k){
             break;
          }
         
    }

    while(!s.empty()){
        int temp=s.top();
        s.pop();
        q.push(temp);
    }
    
    // pop then push till n-k times
    int pos=n-k;
    while(pos--){
        int temp=q.front();
        q.pop();
        q.push(temp);
      
    }
}int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k=5;
    reverseKth(q,k);
    /*
    reverseKthElem_Recursion(q,k);
    int pos=q.size()-k;
    while(pos--){
         int temp=q.front();
         q.pop();
         q.push(temp);
    }
    */

    cout<<"Printing reverse after kth element: "<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}