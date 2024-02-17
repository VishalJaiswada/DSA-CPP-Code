// condtional or ternary operator
#include <iostream>
using namespace std;

int main()
{
    int age;
   // cout << "Enter the age" << endl;
    // cin >> age;
    // (age >= 18) ? cout << "can vote" : cout << "can't vote" << endl;

    /* int num;
    cout<<"Enter the no."<<endl;
    cin>>num;
    (num%2==0)?cout<<"Even no.":cout<<"Odd no."<<endl;
    */

/*
   int a=5,b=10;
   int ans1=(++a)*(--b);
   int ans2=(++a)*(b--);
   int ans3=(a++)*(--b);
   int ans4=(a++)*(b--);
   cout<<ans1<<endl<<ans2<<endl<<ans3<<endl<<ans4<<endl;
   */ 
 
 // print the digit of given int value

 /* 
 int n,rev=0;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  while(n!=0)
  {
        rev=rev*10+n%10;
        n=n/10;
  }
  
  while(rev!=0)
  {
    int r=rev%10;
    cout<<r<<endl;
    rev/=10;
  }
  */

 // count total no. of set bits
 int n,count=0;
 cout<<"Enter the value of n"<<endl;
 cin>>n;
 while(n!=0)
 {
    if(n&1)
    {
        count++;
    }
    n=n>>1;
 }
 cout<<"number of set bits"<<" "<<count<<endl;
  
}
 