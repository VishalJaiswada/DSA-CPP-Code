#include<iostream>
using namespace std;
bool check_key(string str,int n,int i,char key)
{
   if (i>=n)
   { // key not found
    return false;
   }
   // first case solve karte hai
    if(str[i]==key)
    return true;
    //baki recursion sambhal lega 
    return check_key(str,n,i+1,key);
}

int main()
{
   string str="Vishal Jaiswada";
   int n=str.length();
   int i=0;
   char key='J';
   bool ans=check_key(str,n,i,key);
   cout<<"answer is: "<<ans<<endl;
   return 0;
}