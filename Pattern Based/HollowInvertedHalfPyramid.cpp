#include <iostream>
using namespace std;

int main()
{
   int size;
   cout << "Enter the size of rectangle : ";
   cin >> size;

   for (int i = 0; i < size; i++){
      for (int j = 0; j < size-i; j++){
         if ( j == 0 || j == size-i-1|| i == 0 || i == size - 1){
            cout << "* ";
         }
         else
         {
            cout << "  ";
         }
      }
      cout << endl;
   }
}