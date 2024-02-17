#include <iostream>
#include <vector>
using namespace std;

// finding the pivot element
int find_pivot(vector<int> arr)
{
  int s = 0, e = arr.size() - 1, mid;
 
  while (s <= e)
  {
    mid = s + (e - s) / 2;
    if (s == e)
    {
      return s; // for single element in an array
    }

    if (mid+1 <= e && arr[mid] > arr[mid + 1])
      return mid;
    if (mid - 1 >= s && arr[mid - 1] > arr[mid])
      return (mid - 1);
    if (arr[s] > arr[mid]) // left search
      e = mid - 1;
    else  // right search, if (arr[s] < arr[mid])
    {
      s = mid + 1;
    }
  }
  return -1;
}

int main()
{
  vector<int> arr{3,4,5,6,7,9,10,11,1,2};
  int ans = find_pivot(arr);
  if (ans == -1)
  {
    cout << "No pivot element found " << ans <<endl;
  }
  else
  {
    cout << "Pivot element is:" << arr[ans];
  }
}