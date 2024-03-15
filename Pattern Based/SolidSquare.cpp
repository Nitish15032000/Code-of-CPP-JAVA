#include <iostream>
using namespace std;

int main()
{
   int size = 5;
   cout << "Enter the size of rectangle : ";
   cin >> size;

   for (int i = 0; i < size; i++)
   {
      for (int j = 0; j < size; j++)
      {
         cout << "* ";
      }
      cout << endl;
   }
}