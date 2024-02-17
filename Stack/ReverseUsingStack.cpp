// #include<iostream>
// using namespace std;
// // reverse the string using stack
// class Stack{
//        public:
//        char* arr;
//        int top;
//        int size;

//        Stack(int size){
//         arr= new char[size];
//         top=-1;
//         this->size=size;
//        }
//        // wrinting function for push and pop
//        void push(char data){
//           if(size-top>1){
//             // stack is empty
//             top++;
//             arr[top]=data;
//           }
//           else{
//             cout<<"Stack Overflow"<<endl;
//           }
//        }

//        void pop(){
//            if(top==-1){
//             cout<<"Stack Underflow"<<endl;
//            }
//            else{
//              top--;
//            }
//        }
//        char getTop(){
//            return arr[top];
//        }
//        bool isEmpty(){
//         if(top==-1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };
// int main(){
//       Stack s(5);
//       s.push('I');
//       s.push('J');
//       s.push('M');
//       s.push('A');
//       s.push('R');
//     //   s.push('J');
//       cout<<"Printing data in stack: "<<endl;
//       while(!s.isEmpty()){
//           cout<<s.getTop()<<" ";
//           s.pop();
//       }
//   return 0;
// }

#include<iostream>
#include<stack>
using namespace std;
int main(){
  string str="IJMARATIS";
  stack<char>s;
  for(int i=0;i<str.length();i++){
     s.push(str[i]);
  }
  while(!s.empty()){
    cout<<s.top()<<" ";
     s.pop();
  }
  return 0;
}