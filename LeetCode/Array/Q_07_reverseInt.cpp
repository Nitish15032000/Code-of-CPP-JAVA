#include <iostream>
#include <math.h>
using namespace std;

int reverse(int x)
{
   int n = 0;
   while (x)
   {
      if (n > INTMAX_MAX / 10 || n < INTMAX_MIN / 10)
         return 0;
      n = n * 10 + x % 10;
      x = x / 10;
   }
   return n;
}

int main()
{
   int x = -123;
   cout << reverse(x);
   // cout << reverse1(x);
}

// int reverse1(int x)
// {
//    int n = 0;
//    bool isNeg = false;
//    if (x < 0)
//    {
//       isNeg = true;
//       x = -1 * x;
//       // cout << x;
//    }
//    while (x > 0)
//    {
//       int r = x % 10;
//       n = (n * 10) + r;
//       x = int(x / 10);
//    }

//    if (isNeg == true)
//    {
//       return -1 * n;
//    }
//    else
//    {
//       return n;
//    }
// }