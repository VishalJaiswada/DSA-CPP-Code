#include <iostream>
#include <vector>
using namespace std;
// Binary Search in a nearly sorted array
int binarysearch(vector<int> arr, int target)
{
    int s = 0, end = arr.size() - 1, mid;
    while (s <= end)
    {
        mid = s + (end - s) / 2;
        if (arr[mid] == target)
            return mid;
        if (mid - 1 >= 0 && arr[mid - 1] == target) // mid-1>=s
            return mid - 1;
        if (mid + 1 < arr.size() && arr[mid + 1] == target)  //mid+1<e
            return mid + 1;

        if (arr[mid] < target)
        { // right search
            s = mid + 2;
        }
        else
            // left search
            end = mid - 2;
    }
    return -1;
}
int main()
{
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int target;
    cout << "Enter the target value" << endl;
    cin >> target;
    int ans = binarysearch(arr, target);
    cout << "index of target"
         << " " << ans;
    return 0;
}