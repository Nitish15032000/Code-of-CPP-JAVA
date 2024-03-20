#include <vector>
#include <iostream>
using namespace std;

int main()
{
   // Declaration and initialization
   vector<int> myVector1{1, 2, 3, 4, 5};

   // Declaration without initialization
   vector<int> arr;

   // Add elements using push_back
   arr.push_back(10);
   arr.push_back(20);
   arr.push_back(30);

   // Access elements
   cout << "First element of array: " << arr[0] << endl;
   cout << "Second element of array: " << arr.at(1) << endl;

   return 0;
}
