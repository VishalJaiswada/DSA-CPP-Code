#include<iostream>
using namespace std;
// Run time Polymorhism--> Function Overriding
class Animal{
              public:
              void speak()
              {
                cout<<"speaking"<<endl;
              }
            
};
class Dog:public Animal{
                       public:
                       //Override
                       void speak()
                       {
                        cout<<"Barking"<<endl;
                       }
};
int main()
{ 
    Animal buffalo;
    buffalo.speak();
    Dog dhanno;
    dhanno.speak();

  return 0;   
}