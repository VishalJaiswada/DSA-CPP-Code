#include<iostream>
#include<vector>
using namespace std;
void print_Subsequences(string str,string output,int i)
{
   // base case
   if(i>=str.length())
   {
    cout<<output<<endl;
    return;
   }
   // exclude
   print_Subsequences(str,output,i+1);
   // include
   output.push_back(str[i]); // or output=output+str[i];

   print_Subsequences(str,output,i+1);
}
int main()
{
    string str="abcd";
    string output="";
    int i=0;
    cout<<"Subsequences of given strings are :"<<endl;
    print_Subsequences(str,output,i);
 return 0;
}