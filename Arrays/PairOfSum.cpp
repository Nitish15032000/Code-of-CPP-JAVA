#include <vector>
#include <iostream>
using namespace std;

int main()
{
   int arr[] = {2, 4, 5, 7, 8, 9, 6, 1};
   int size = sizeof(arr) / sizeof(arr[0]);

   int sum = 9;

   for (int i = 0; i < size; i++)
   {
      for (int j = i+1; j < size; j++)
      {
         if (sum == (arr[i]+arr[j]))
         {
            cout << arr[i] <<" "<<arr[j] << endl;
         }
         
      }
   }
}