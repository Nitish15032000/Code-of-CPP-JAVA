#include <iostream>
using namespace std;

int AreaOfCircle(int r)
{
   return (3.14 * r * r);
}

bool EvenOdd(int n)
{
   return (n % 2 == 0) ? true : false;
}

bool PrimeOrNot(int n){
   bool prime = true;
   for (int i = 2; i <= n/2; i++)
   {
      if (n % i == 0)
      {
         prime = false;
         break;
      }
      
   }
   
   return prime;
}

int main()
{
   int r;
   cout << "Enter the redius of circle : ";
   cin >> r;

   cout << "The Area of Circle is : " << AreaOfCircle(r) << endl;

   int n;
   cout << "Enter the Number : ";
   cin >> n;
   if (EvenOdd(n))
   {
      cout << "Even" << endl;
   }
   else
   {
      cout << "odd" << endl;
   }


   cout << "prime : ";
   if (PrimeOrNot(n))
   {
      cout << "yes" << endl;
   }
   else
   {
      cout << "not" << endl;
   }


}