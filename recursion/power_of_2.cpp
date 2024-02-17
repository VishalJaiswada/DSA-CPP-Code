#include<iostream>
using namespace std;
int pow_two(int n)
{
    if (n==0)
    return 1;
    else
    {
        return 2*pow_two(n-1);
    }
}
int main()
{ 
  int n;
  cout<<"Enter the power value of two"<<endl;
  cin>>n;
  int ans=pow_two(n);
  cout<<"power of two is:"<<ans<<endl;

}