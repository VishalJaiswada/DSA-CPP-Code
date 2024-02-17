#include<iostream>
#include<string.h>
using namespace std;
void print_permutation(string& str,int i)
{
    // base case
    if(i>=str.length())
    {
        cout<<str<<" ";
        return;
    }
    //1st case  
    for(int j=i;j<str.length();j++)
    {  
         // swap
       swap(str[i],str[j]);
       
       // call the recursion
       print_permutation(str,i+1);
       // swap again to find original value by backtracking
       swap(str[i],str[j]);
    }
    
}
int main()
{
    string str;
     cin>>str;
    int i=0;
    print_permutation(str,i);
    return 0;
}