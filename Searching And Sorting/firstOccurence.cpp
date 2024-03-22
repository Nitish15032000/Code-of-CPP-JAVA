#include <limits.h>
#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int> arr, int target)
{
   int start = 0;
   int end = arr.size() - 1;
   int ans = -1;

   while (start <= end)
   {
      int mid = start + (end - start) / 2;
      if (arr[mid] == target)
      {
         ans = mid;
         end = mid - 1;
      }
      else if (arr[mid] < target)
      {
         start = mid + 1;
      }
      else
      {
         end = mid - 1;
      }
   }
   return ans;
}

int main()
{
   int target;
   vector<int> arr{2, 8, 12,15 ,15,15,15,15, 18, 44, 60, 87, 90};

   cout << "Enter the target : ";
   cin >> target;
   int ans = firstOccurence(arr, target);

   cout << "Index nunber is :" << ans << endl;
}