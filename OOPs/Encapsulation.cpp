#include<iostream>
using namespace std;
class Animal{
    private:
           int age;
           int weight;
    public:
           void eat()
           {
            cout<<"Eating"<<endl;
           }
           int getAge(){
            return this->age;
           }
           void setAge(int age){
            this->age=age;
           }
           int getWeight()
           {
            return this->weight;
           }
           void setWeight(int weight)
           {
            this->weight=weight;
           }

};
int main()
{  
    Animal vishal;
    vishal.setAge(22);
    vishal.setWeight(61);
    cout<<"Age of Vishal is:"<<vishal.getAge()<<" "<<endl;
    cout<<"Weight of Vishal is:"<<vishal.getWeight()<<" "<<endl;
    vishal.eat();
    return 0;
}