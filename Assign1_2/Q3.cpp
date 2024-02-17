#include <iostream>
using namespace std;
// printing Inverted Half pyramid pattern
int main()
{
    cout << "Enter the value of n: " << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (i+j<=n)
            {
                cout <<"*";
            }
        }
        cout << endl;
    }
    return 0;
}