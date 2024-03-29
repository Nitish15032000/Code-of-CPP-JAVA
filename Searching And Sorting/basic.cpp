#include<iostream>
using namespace std;
void sort(int arr[],int n){
   int l = 0;
   int h = n-1;
   while (l<=h)
   {
      if(arr[l]==0){
         l++;
      }
      if(arr[l]==1){
         if(arr[h]==1){
            h--;
         }else{
            swap(arr[l], arr[h]);
            l++;
            h--;
         }
      }
   }   

   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
}

int main(){
   int arr[] = {0,1,1,0,1};
   int n = sizeof(arr)/sizeof(arr[0]);

   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;

   sort(arr, n);

   
}