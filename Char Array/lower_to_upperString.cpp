#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;

void Upper_string(char ch[])
{
    int n=strlen(ch);
    for(int i=0;i<n;i++)
    {
        ch[i]=ch[i]-'a'+'A';
    }
}
void lower_string(char ch[])
{
    int n=strlen(ch);
    for(int i=0;i<n;i++)
    {
        ch[i]=ch[i]-'A'+'a';
    }
}

int main()
{
    // lower case to upper case
    char ch[100];
    cout << "Enter the strings" << endl;
    cin.getline(ch, 100);
  
    Upper_string(ch);
    cout << ch;
    
    return 0;
}