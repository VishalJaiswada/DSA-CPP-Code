#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;

bool palindrome_string(char ch[])
{
    int i=0,j=strlen(ch)-1;
    
    while(i<=j)
    {
        if(ch[i]!=ch[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    // replace a space by @ in strings
    char ch[100];
    cout << "Enter the strings" << endl;
    // cin.getline(ch, 100);
    cin>>ch;
    bool t = palindrome_string(ch);
     if(t==true)
     {
        cout<<"String is palindrome"<<endl;
     }
     else{
        cout<<"String not palindrome"<<endl;
     }
    return 0;
}









