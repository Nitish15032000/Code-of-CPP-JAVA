#include <iostream>
using namespace std;

void printArray(int arr[3][3]){
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         cout << arr[i][j] << " ";
      }
      cout << endl;
   }
}


void Sum_row(int arr[][3]){
   for (int i = 0; i < 3; i++)
   {
      int sum = 0;
      for (int j = 0; j < 3; j++)
      {
         sum += arr[i][j];
      }
      cout << sum << " ";
   }
   cout << endl;
} 

int MaxInArray(int arr[][3]){
   int max = 0;
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if (max < arr[i][j])
         {
            max = arr[i][j];
         }
      }
   }
   return max;
}

void TransposeMatrix(int arr[3][3]){
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         swap(arr[i][j], arr[j][i]);
      }
   }

}



int main(){
   int arr[3][3] = {{4,8,5},
                    {5,9,11},
                    {8,9,7}};

   Sum_row(arr);

   int max = MaxInArray(arr);
   cout <<"Max element is : " << max << endl;

   TransposeMatrix(arr);
   printArray(arr);
   
}