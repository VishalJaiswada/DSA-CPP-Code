#include<iostream>
using namespace std;
void check_key(string str,int n,int i,char key)
{
   if (i>=n)
   { // key not found
    return;
   }
   // first case solve karte hai
    if(str[i]==key)
     {
       cout<<"index of key :"<< i <<endl;
     }
    //baki recursion sambhal lega 
     check_key(str,n,i+1,key);
}

int main()
{
   string str="Vishal Jaiswada";
   int n=str.length();
   int i=0;
   char key='a';
   check_key(str,n,i,key);
   return 0;
}