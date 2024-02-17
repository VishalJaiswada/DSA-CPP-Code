#include<iostream>
using namespace std;
// compile-time polymorphism --> function Overloading
class maths{
           public:
                  int sum(int a,int b)
                  { 
                    cout<<"First signature: ";
                    return a+b;
                  }
                  int sum(int a,int b,int c)
                  {
                      cout<<"Second signature: ";
                      return a+b+c;
                  }
                  int sum(int a,float b)
                  {
                    cout<<"Third Signature: ";
                    return a+b+100;
                  }
} ;
int main()
{   maths obj;
   cout<<obj.sum(10,5)<<endl;
   cout<<obj.sum(10,20,20)<<endl;
   cout<<obj.sum(5,3.12f)<<endl;
    return 0;
}