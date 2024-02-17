#include<iostream>
using namespace std;
class Animal{
           protected:
                 // data member
                  int age;
                  int weight;
                 // member function
                  void eat(){
                    cout<<"Eating"<<endl;
                  }
                
};
class Dog:private Animal{
          public:
                 void print()
                 {  
                    this->age=15;
                    cout<<this->age;
                 }
};
int main()
{  
    Dog dhanno;
      dhanno.print();
    // cout<<dhanno.age;
    /* 
    dhanno.age=5;
    dhanno.weight=12;
    cout<<"age of dhanno: "<<dhanno.age<<endl;
    cout<<"weight of dhanno: "<<dhanno.weight<<endl;
    dhanno.eat();
    */ 
    return 0;
}