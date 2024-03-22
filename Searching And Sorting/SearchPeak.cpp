#include <limits.h>
#include <iostream>
#include <vector>
using namespace std;

int SearchPeak(vector<int> arr)
{
   int start = 0;
   int end = arr.size()-1;
   int ans = arr[0];

   while (start <= end)
   {
      int mid = start + (end-start)/2;
      if (arr[mid]>arr[mid+1])
      {
         if (arr[mid]>arr[mid-1])
         {
            ans = arr[mid];
         }
         end = mid-1;
      }
      else if (arr[mid]<arr[mid+1])
      {
         start = mid +1;
      } 
   }
   return  ans;
}

int main()
{
   int target;
   vector<int> arr{2, 8, 12,15 ,15, 18, 44, 60, 87, 70,55,10,1};

   int ans = SearchPeak(arr);

   cout << "Peak element is :" << ans << endl;
}