#include <iostream>
using namespace std;

int main()
{
   // char ch[10];

   // // Nitish Kumar --> Nitish (only printed)
   // cout << "Enter the char : ";
   // cin >> ch;
   // cout << ch << endl;
   
   
   // // Nitish Kumar --> Nitish Kumar
   // cout << "Enter the char : ";
   // cin >> ch;
   // cout << ch << endl;

   int arr[] = {5,7,8,10,4,9,3};
   int size = sizeof(arr)/sizeof(arr[0]);
   int i = 0;
   int oldmin = arr[i];
   int min = arr[i];
   while (i<size)
   {
      if (oldmin > arr[i] )
      {
         if (min > arr[i])
         {
            oldmin = min;
            min = arr[i];
         }else{
            oldmin = arr[i];
         }
      }
      i++;
   }

   cout << min << endl;
   cout << oldmin;
   

   
}