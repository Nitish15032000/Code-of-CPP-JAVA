#include <iostream>
#include <vector>
using namespace std;



int matSearch(vector<vector<int>> &mat, int N, int M, int x){
   int row = 0;
   int col = 0;
   int Endrow = N-1;
   int Endcol = M-1;

   int mark = 0;

   while (row <= Endrow)
   {
      if (mat[row][col]==x)
      {
         return 1;
      }
      if (mat[row][col] > x && row > 0)
      {
         mark = row-1;
         break;
      }else
      {
         mark = row;
      }

      row++;
   }
   
   cout << "marke col is " << mark << endl;
   row = mark;

   while (col <= Endcol)
   {
      if (mat[row][col]==x)
      {
         return 1;
      }

      col++;
   }
   return 0;
}

int main(){
   vector<vector<int>> matrix{{3, 30, 38}, {44, 52, 54}, {57, 60, 69}};
   int target = 69;
   int ans = matSearch(matrix, matrix.size() , matrix[0].size(), target );

   cout << "ans is " << ans ;

}


// while (col < Endcol)
//    {
//       int mid = col + (Endcol-1)/2;
//       if (x == mat[row][mid])
//       {
//          return 1;
//       }else if (mat[row][mid] > x)
//       {
//          mark = mid;
//          Endcol = mid - 1;
//       }else
//       {
//          mark = mid;
//          col = mid + 1;
//       }
      
//    }