#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int firstRepeated(int arr[], int n)
{
   // code here
   unordered_map<int, int> hash;
   for (int i = 0; i < n; i++)
   {
      hash[arr[i]]++;
   }

   for (int i = 0; i <= n; i++)
   {
      if (hash[arr[i]] > 1)
      {
         return i + 1;
      }
   }
   return -1;
}

int main()
{
   int n = 7;
   int arr[] = {1, 5, 3, 4, 3, 5, 6};

   cout << firstRepeated(arr, n) ;
}