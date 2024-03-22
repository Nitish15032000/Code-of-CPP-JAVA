#include <limits.h>
#include <iostream>
using namespace std;

int linear(int arr[],int n,  int target){
   
   for (int i = 0; i < n; i++)
   {
      if (target == arr[i])
      {
         return i;
      }      
   }
   return -1;
}

int main(){
   int arr[] = {2,5,8,4,6,87,62,90};
   int target;
   int n = sizeof(arr)/sizeof(arr[0]);
   cout << "Enter the target : ";
   cin >> target;
   int ans = linear(arr, n , target);

   cout << "Index nunber is :"<< ans << endl;
}