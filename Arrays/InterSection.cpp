#include <vector>
#include <limits.h>
#include <iostream>
using namespace std;

int main()
{
   int arr[] = {1, 2, 3, 5, 6, 8, 4, 9};
   int arr1[] = {11, 45, 12, 54, 8};

   vector<int> ans;

   for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
   {
      for (int j = 0; j < sizeof(arr1) / sizeof(arr1[0]); j++)
      {
         if (arr[i] == arr1[j])
         {
            arr[i] = INT_MIN;
            break;
         }
      }
      if (arr[i] == INT_MIN)
      {
         continue;
      }
      ans.push_back(arr[i]);
   }
   for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
   {
      ans.push_back(arr1[i]);
   }

   for (int i = 0; i < ans.size(); i++)
   {
      cout << ans[i] << " ";
   }
}