
#include <iostream>
using namespace std;

int setKthBit(int n, int k)
{
   return ((1 << k) | n);
}

int main()
{
   int n = 10, k = 2;
   cout << "Kth bit set number = "
        << setKthBit(n, k);
   return 0;
}
