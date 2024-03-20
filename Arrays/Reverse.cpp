#include<iostream>
using namespace std;

void swap1(int &a, int &b){
   int temp = b;
   b = a;
   a = temp;
}

int main(){
   int arr[5] = {1,2,3,4,5};

   int start = 0;  
   int end = sizeof(arr) / sizeof(arr[0]);; 
   // cout << sizeof(arr); 
   // cout << sizeof(arr[0]) ; 
   while (start < end)
   {
      swap1(arr[start], arr[end-1]);
      start++;
      end--;
   }

   for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
   {
      cout << arr[i];
   }
   
   
}