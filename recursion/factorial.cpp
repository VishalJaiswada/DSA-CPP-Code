#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==1 || n==0)
    return 1;
    else
    return n*factorial(n-1);
} 
int main()
{
   int n;
   cout<<"Enter the value to find factorial"<<endl;
   cin>>n;
   int ans=factorial(n);
   cout<<"Result of factorial is: "<<ans<<endl; 
}