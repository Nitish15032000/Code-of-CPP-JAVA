#include<iostream>
using namespace std;

void solidsuared(int n){
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j++)
      {
         cout << " * ";
      }
      cout << endl;
   }
   
}


int main(){
   int n = 4;

   solidsuared(n);
   return 0;
}