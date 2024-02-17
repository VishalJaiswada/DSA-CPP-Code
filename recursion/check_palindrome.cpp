#include<iostream>
using namespace std;
bool check_palindrome(string str,int s,int e){
   // Base case
    if(s>=e)
    {
       return true;
    }
    // 1st case solve karna hai
    if(str[s]!=str[e])
    {
        return false;
    }
    //baki recursion sambhal lega
    return check_palindrome(str,s+1,e-1);
}
int main()
{
   string str;
   cin>>str;
   int s=0,e=str.length()-1;
   bool str1=check_palindrome(str,s,e);
   if(str1==true)
   {
    cout<<"String is palindrome"<<endl;
   }
   else{
    cout<<"String is not palindrome"<<endl;
   }
}