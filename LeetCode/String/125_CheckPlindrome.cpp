#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
   int start = 0;
   int end = s.size() - 1;
   while (start <= end)
   {
      // check if char of start is not alphanumeric value than skip that char
      if (!isalnum(s[start]))
      {
         start++;
         continue;
      }

      // check if char of end is not alphanumeric value than skip that char
      if (!isalnum(s[end]))
      {
         end--;
         continue;
      }

      if (tolower(s[start]) != tolower(s[end])){
         return false;
      }
      else
      {
         start++;
         end--;
      }
   }
   return true;
}

int main()
{
   string s = "A man, a plan, a canal: Panama";
   bool ans = isPalindrome(s);
   cout << ans;
}