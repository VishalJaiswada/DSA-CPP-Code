#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;

void replace_string(char ch[])
{
    int i = 0;
    int n = strlen(ch);
    for (int i = 0; i < n; i++)
    {
        if (ch[i] == ' ')
        {
            ch[i] = '@';
        }
    }
}

int main()
{
    // replace a space by @ in strings
    char ch[100];
    cout << "Enter the strings" << endl;
    cin.getline(ch, 100);
    int d=strlen(ch);
    replace_string(ch);
   
    cout << ch;
    cout<<d;
    return 0;
}