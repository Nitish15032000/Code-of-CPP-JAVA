#include <iostream>
#include <vector>
using namespace std;

void reverseSubArray(vector<int> &arr, int n, int l, int r)
{
   // code here
   int s = l - 1;
   int e = r - 1;
   while (s < e)
   {
      int temp = arr[s];
      arr[s] = arr[e];
      arr[e] = temp;
      s++;
      e--;
   }
}

int main()
{
   vector<int> vct{1, 5, 4, 8, 7, 5, 4};
   int n = vct.size();
   int l = 2;
   int r = 5;

   reverseSubArray(vct, n, l, r);

   for (int i = 0; i < n; i++)
   {
      cout << vct[i] << " ";
   }
   
}