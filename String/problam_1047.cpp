#include <iostream>
#include <vector>
using namespace std;

string removeDuplicates(string s)
{
   string ans = "";

   int i = 0;
   while (i < s.length())
   {
      if ((ans.length() > 0) && (ans[ans.length() - 1] == s[i]))
      {
         ans.pop_back();
      }
      else
      {
         ans.push_back(s[i]);
      }
      i++;
   }
   return ans;
}

int main()
{
   string s = "abbaca";
   cout << s << endl;
   string ans = removeDuplicates(s);

   cout << ans << endl;
}