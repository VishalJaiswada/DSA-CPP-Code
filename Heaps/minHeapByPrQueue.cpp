#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // min heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(3);
    pq.push(6);
    pq.push(9);
    pq.push(4);
    pq.push(8);

    cout << "Top Element: " << pq.top() << endl;
    pq.pop();
    cout<<"Size: "<<pq.size()<<endl;
    cout << "Top Element: " << pq.top() << endl;
    pq.pop();
    cout << "Top Element: " << pq.top() << endl;
    pq.pop();
    cout << "Top Element: " << pq.top() << endl;
    pq.pop();
    cout << "Top Element: " << pq.top() << endl;
    pq.pop();

    cout << "Size: " << pq.size() << endl;
    if (pq.empty())
    {
        cout << "Min Heap is empty!" << endl;
    }
    else
    {
        cout << "Min heap is not empty" << endl;
    }
    return 0;
}