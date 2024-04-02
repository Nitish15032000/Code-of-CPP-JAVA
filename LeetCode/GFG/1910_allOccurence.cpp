#include <iostream>
#include <string>
using namespace std;

string removeOccurrences(string s, string part)
{
   int fi = s.find(part);
   int partlen = part.length();
   while (fi != -1)
   {
      s.erase(s.begin() + fi, s.begin() + fi + partlen);
      fi = s.find(part);
   }
   return s;
}

int main()
{
   string s = "daabcbaabcbc";
   string part = "abc";
   cout << "String = " << s << endl;
   cout << "part = " << part << endl;

   string ans = removeOccurrences(s , part);

   cout << "ans = " <<ans << endl;
   
   // int fi = s.find(part);
   // while (fi != -1)
   // {
   //    cout << fi << endl;
   //    s.erase(s.begin() + fi, s.begin() + fi + 3);
   //    cout << s << endl;
   //    fi = s.find(part);
   // }
}