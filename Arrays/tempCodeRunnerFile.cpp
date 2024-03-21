
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int firstRepeated(int a[], int n)
{
   unordered_map<int, int>hash;
   for (int i = 0; i < n; i++)
   {
      hash[a[i]]++;
   }

   for (int i = 0; i < n; i++)
   {
      if (hash[a[i]] > 1)
      {
         return i + 1;
      }
   }

   return -1;
}

int main()
{
   int arr[] = {1, 2, 3, 5, 6, 8, 4, 9};
   int n = sizeof(arr) / sizeof(arr[0]);
   int ans = firstRepeated(arr, n);
}


