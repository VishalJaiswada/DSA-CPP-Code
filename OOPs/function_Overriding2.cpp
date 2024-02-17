#include<iostream>
using namespace std;
class Fruit{
          public:
          Fruit(){
           cout<<"I am inside Fruit Constructor"<<endl;
          }
};
class Mango:public Fruit{
          public:
          Mango(){
           cout<<"I am inside Mango Constructor"<<endl;
          }
};
class Langada:public Mango{
          public:
          Langada(){
           cout<<"I am inside Langada Constructor"<<endl;
          }
};
class Totapuri:public Mango{
          public:
          Totapuri(){ 
           cout<<"I am inside Totapuri Constructor"<<endl;
          }
}; 
int main()
{
    Fruit f1;
    Mango m1;
    Langada l1;
    Totapuri t1;
    return 0;
}