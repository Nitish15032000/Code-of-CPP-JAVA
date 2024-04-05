#include<iostream>
#include<string>
using namespace std;


int expandAroundIndex(string s, int i, int j)
{
   int count = 0;
   while (i >= 0 && j < s.length() && s[i] == s[j])
   {
      count++;
      i--;
      j++;
   }
   return count;
}

int countSubstrings(string s)
{
   int count = 0;

   for (int i = 0; i < s.length(); i++)
   {
      // odd
      int ansOfOdd = expandAroundIndex(s, i, i);
      count = count + ansOfOdd;

      // Even
      int ansOfEven = expandAroundIndex(s, i, i + 1);
      count = count + ansOfEven;
   }
   return count;
}

int main(){
   string s = "abc";

   cout << "Number of plindrome substring is " << countSubstrings(s);
}