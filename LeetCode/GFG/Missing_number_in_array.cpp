#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int> &array, int n)
{
   int sum = (n*(n+1))/2;
 
   for (int i = 0; i < array.size(); i++)
   {
      sum = sum - array[i];
   }
   return sum;
}

int main(){
   vector<int> vct{1,2,4};

   int ans =missingNumber(vct, 4);

   cout << "ans is" << ans ;

}