#include<iostream>
#include<string>
using namespace std;

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
   string s = "abc";
   // string newstr = "";
   // int size = s.length();
   // for (int i = 0; i < size; i++)
   // {
   //    for (int j = i+1; j < size; j++)
   //    {
   //       newstr = s.substr(i,j);
   //       cout << newstr << ", ";
   //    }
   //    cout << endl;
      
   // }

   int size = s.length();
   int i = 0;
   int j = 0;
   string ns = "";
   int count = 0;
   // for Odd case
   while (i>=0 && j<size)
   {
      if (i == j)
      {
         count++;
      }
      
      
      
   }
   

   
}