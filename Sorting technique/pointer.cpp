#include<iostream>
using namespace std;
int main()
{
  /* int a=5;
   int *p = &a;
   cout<<a<<endl;
   cout<<&a<<endl;
   cout<<p<<endl;
   cout<<*p<<endl;
   cout<<&p<<endl;
   */
  int a=10;
  int *ptr=&a;
  char ch='b';
  char *ctr=&ch;
  double d=1.045;
  double *dtr=&d;
  cout<<sizeof(ptr)<<endl;
  cout<<sizeof(ctr)<<endl;
  cout<<sizeof(dtr)<<endl;
  /*
  cout<<ptr<<endl;
  a=a+1;
  ptr=ptr+1;
  cout<<a<<endl;
  cout<<ptr<<endl;
  *ptr=*ptr+1;
  cout<<*ptr<<endl;
  */
 cout<<a<<endl;
 cout<<&a<<endl;
 cout<<ptr<<endl;
 cout<<*ptr<<endl;
 cout<<&ptr<<endl;
 cout<<*ptr*2<<endl;
 cout<<(*ptr)++<<endl;
 cout<<++(*ptr)<<endl;
 cout<<a+1<<endl;
 cout<<*ptr+2<<endl;
 cout<<*ptr*2<<endl;
 cout<<*ptr/2<<endl;

}