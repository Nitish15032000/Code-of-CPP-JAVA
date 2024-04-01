#include<iostream>
#include<string>
using namespace std;

void captalize(string str){
   for (int i = 0; i < str.length(); i++)
   {
      str[i] = str[i] - 'a' + 'A';
   }

   cout << str;
   
}

bool findplindrome(string str){
   int last = str.length()-1;
   int start = 0;
   
   while (start<last)
   {
      if (str[start]!=str[last])
      {
         return false;
      }
      start++;
      last--;
      
   }
   return true;
}

int main(){
   string str = "noon";

   
   cout << findplindrome(str) << endl;
   captalize(str);
   
}