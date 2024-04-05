#include <iostream>
#include <vector>
#include<string>
#include <bits/stdc++.h>
using namespace std;
// vector<int> AddArray(vector<int> vct1, vector<int> vct2)
// {
//    vector<int> ans;
// }

vector<int> findSum(vector<int> &a, vector<int> &b)
{
   int i = a.size();
   int j = b.size();
   string s = "";
   int carry = 0;

   while (i >= 0 && j >= 0)
   {
      int sum = a[i] + a[j] + carry;
      int rem = sum % 10;
      carry = sum / 10;
      s.push_back(rem);
      i--;
      j--;
   }

   while (i >= 0)
   {
      int sum = a[i] + 0 + carry;
      int rem = sum % 10;
      carry = sum / 10;
      s.push_back(rem);
      i--;
   }

   while (j >= 0)
   {
      int sum = 0 + a[j] + carry;
      int rem = sum % 10;
      carry = sum / 10;
      s.push_back(rem);
      j--;
   }

   int k = s.length() - 1;
   while (s[k] == '0')
   {
      s.pop_back();
      k--;
   }

   reverse(s.begin(), s.end());
   vector<int> ans;
   for (int l = 0; l < s.length(); i++)
   {
      ans.push_back(s[i]);
   }

   return ans;
}

int main()
{
   vector<int> vct1{5, 7, 8, 9};
   vector<int> vct2{7, 5, 2};

   vector<int> ans = findSum(vct1, vct2);

   for (int i = 0; i < ans.size(); i++)
   {
      cout << ans[i] << " ";
   }
   
}