#include <vector>
#include <limits.h>
#include <iostream>
using namespace std;
int duplicate(vector<int> arr)
{
   for (int i=0; i < arr.size(); i++)
   {
      int index = abs(arr[i]);
      cout<< index <<" ";

      if (arr[index] < 0){
         return index;
      }

      // marks visited
      arr[index] *= -1;
      
   }
   return -1;
}

int main()
{
   vector<int> arr{1, 3, 2, 4, 2};
   int ans = duplicate(arr);
   cout << ans;
}