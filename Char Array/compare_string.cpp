#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;
bool compare_string(string a, string b)
{
  if (a.length() != b.length())
  {
    return false;
  }
  for (int i = 0; i < a.length(); i++)
  {
    if (a[i] != b[i])
    {
      return false;
    }
  }

  return true;
}

int main()
{
  // compare two strings
  string a;
  string b;
  cout << "Enter the 1st strings" << endl;
  getline(cin, a);
  cout << "Enter the 2nd strings" << endl;
  getline(cin, b);
  bool t = compare_string(a, b);
  cout << t << endl;
  return 0;
}