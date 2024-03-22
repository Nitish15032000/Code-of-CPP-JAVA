#include <limits.h>
#include <iostream>
using namespace std;
void missingElemt(int arr[5], int n){

   for (int i = 0; i < n; i++)
   {
      int index = abs(arr[i]);
      // marks --> (index-1) because i start from 0 always;
      if (arr[i]>0)  // use because if (- * - = +) so check is needed
      {
         arr[index-1] *= -1;
      } 
   }

   for (int i = 0; i < n; i++)
   {
      if (arr[i] > 0)
      {
         cout << i+1 << " ";
      }  
   }

   // sort swap method

   // for (int i = 0; i < n; i++)
   // {
   //    swap(arr[i], arr[arr[i]-1]);
   // }

   // // for (int i = 0; i < n; i++)
   // // {
   // //    cout << arr[i] << " ";
   // // }
   // for (int i = 0; i < n; i++)
   // {
   //    if (arr[i] != i+1)
   //    {
   //       cout << i+1;
   //    }
   // }
}

int main(){
   // element range is = to size of array 
   int arr[] = {1,2,5,3,2};
   int n = (sizeof(arr)/sizeof(arr[0]));
   missingElemt(arr, n);

}