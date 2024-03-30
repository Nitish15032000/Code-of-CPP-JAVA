// https://leetcode.com/problems/spiral-matrix/description/

#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &m)
{
   int n = m.size();
   int l = m[0].size();
   int top = 0, right = l - 1, bottom = n - 1, left = 0, k = 0;
   vector<int> arr;

   while (left <= right && top <= bottom)
   {
      for (int i = left; i <= right; i++)
      {
         arr.push_back(m[top][i]);
      }
      top++;
      for (int i = top; i <= bottom; i++)
      {
         arr.push_back(m[i][right]);
      }
      right--;
      if (top <= bottom)
      {
         for (int i = right; i >= left; i--)
         {
            arr.push_back(m[bottom][i]);
         }
         bottom--;
      }
      if (left <= right)
      {
         for (int i = bottom; i >= top; i--)
         {
            arr.push_back(m[i][left]);
         }
         left++;
      }
   }
   return arr;
}


int main(){
   vector<vector<int>>arr{{1,2,3},{4,5,6},{7,8,9}};


   vector<int> ans = spiralOrder(arr);

   for (int i = 0; i < ans.size(); i++)
   {
      cout << ans[i] << " ";
   }
   
}