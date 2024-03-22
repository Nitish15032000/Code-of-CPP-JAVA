#include <limits.h>
#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
   int start = 0;
   int end = arr.size() - 1;
   while (start < end)
   {
      int mid = start + (end - start) / 2;
      if (arr[mid + 1] > arr[mid])
      {
         start = mid + 1;
      }
      else
      {
         end = mid;
      }
   }
   return start;
}

int main()
{
   vector<int> arr{2, 8, 12, 15, 18, 44, 60, 87, 90, 85, 48, 40, 23, 5};
   int ans1 = peakIndexInMountainArray(arr);

   cout << "peak element of index is : " << ans1 << endl;
   cout << "peak element is : " << arr[ans1] << endl;
}