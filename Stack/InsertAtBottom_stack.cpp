#include <iostream>
#include <stack>
using namespace std;
 
void insertAtBottom(stack<int> &s,int target)
{
        // base case
    if (s.empty())
    {
        s.push(target);
        return;
    }

    int temp = s.top();
    s.pop();
    // recursion call
    insertAtBottom(s, target);

    // Backtracking
    s.push(temp);
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    // s.push(70);

    if (s.empty())
    {
        cout << "Stack is empty!" << endl;
        // return;
    }

    int target = s.top();
    s.pop();

    insertAtBottom(s,target);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}