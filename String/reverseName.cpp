#include<iostream>
#include<string>
using namespace std;

int main(){
   string str = "nitish";
   int last = str.length()-1;
   int start = 0;

   while (start<last)
   {
      swap(str[start], str[last]);
      start++;
      last--;
   }

   cout << str;
   
}