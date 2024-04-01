#include <iostream>
#include <vector>
using namespace std;

vector<int> wevematrix(vector<vector<int>> matrix)
{
   vector<int> ans;
   
   for (int col = 0; col < matrix[0].size(); col++)
   {
      if ((col & 1) == 0)
      {
         for (int i = 0; i < matrix.size(); i++)
         {
            ans.push_back(matrix[i][col]);
         }
      }
      else
      {
         for (int i = matrix.size() - 1; i >= 0; i--)
         {
            ans.push_back(matrix[i][col]);
         }
      }
   }
   return ans;
}

int main()
{
   vector<vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

   vector<int> ans = wevematrix(matrix);

   for (int i = 0; i < ans.size(); i++)
   {
      cout << ans[i] <<" ";
   }
   
}