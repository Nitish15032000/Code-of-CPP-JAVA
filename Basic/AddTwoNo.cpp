#include<iostream>
using namespace std;

void add(int n1, int n2){
   cout << "Sum is " << (n1+n2);
}

int main(){
   int n1;
   int n2;
   cout << "Enter the 1st number : ";
   cin >> n1;
   cout << "Enter the 2nd number : ";
   cin >> n2;

   add(n1, n2);

   return 0;
}
