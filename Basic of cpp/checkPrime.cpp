#include<iostream>
using namespace std;

bool checkPrimeNo(int n){
   if(n < 4){
      return true;
   }

   for (int i = 2; i < n/2; i++)
   {
      if (n % i == 0){
         return false;
      }
   }

   return true;
}

int main(){
   int n = 18;
   bool ans = checkPrimeNo(n);
   cout << ans; 

   return 0;
}