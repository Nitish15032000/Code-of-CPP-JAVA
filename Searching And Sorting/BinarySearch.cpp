#include <limits.h>
#include <iostream>
using namespace std;

int binarySearch(int arr[],int n,  int target){
   int start = 0;
   int end = n-1;
   
   while (start <= end)
   {
      int mid = start + (end-start)/2;
      if (arr[mid] == target)
      {
         return mid;
      }else if (arr[mid] < target)
      {
         start = mid +1;
      }else{
         end = mid -1;
      }
      
   }
   return -1; 
}

int main(){
   int target;
   int brr[] = {2,8,12,15,18,44,60,87,90};

   int n1 = sizeof(brr)/sizeof(brr[0]);
   cout << "Enter the target : ";
   cin >> target;
   int ans1 = binarySearch(brr, n1 , target);

   cout << "Index nunber is :"<< ans1 << endl;
}