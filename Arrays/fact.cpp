#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int N = 5;
   int fact = 1;
   for (int i = 1; i <= N; i++)
   {
      fact = fact * i;
   }


   cout << fact;
}