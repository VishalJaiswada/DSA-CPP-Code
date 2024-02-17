#include<iostream>
using namespace std;
class animal{
 // state or properties
 private:
 int weight;
 public: 
 int age;
 string type;
 // behaviour or function
 void eat(){
    cout<<"Eating"<<endl;
 }
 void sleep(){
    cout<<"Sleeping"<<endl; 
 }
 // to access the private modifier
 int getWeight()
 {
    return weight;
 }
 void setWeight(int w)
 {
    weight=w;
 }

}; 
int main()
{ 
  // Object Creation--> 2 types

  // static memory
    /* 
     animal ramesh;
     ramesh.age=12;
     ramesh.type="Lion";
     cout<<"Age of ramesh is: "<<ramesh.age<<endl;
     cout<<"type of ramesh is: "<<ramesh.type<<endl;
     ramesh.eat();
     ramesh.sleep();
     ramesh.setWeight(101);
     cout<<"Weight: "<<ramesh.getWeight()<<endl;
     */
  //Dynamic Memory
  animal* suresh=new animal;
  (*suresh).age=15;
  (*suresh).type="billi";
  
  // alternate - dynamic
  suresh->age=17;
  suresh->type="kutta";
  suresh->eat();
  suresh->sleep();

   
  return 0;
}